# Arkansas Project - Copilot Instructions

## Mission-critical context
- Always target the custom **UE 5.4.4-TOW2** build from `nathtest/UnrealEngine@5.4.4-TOW2`; the `.uproject` is bound to GUID `{712B673E-4DF2-5FF2-6216-73B007077982}` and will not open in stock UE.
- This repository is the C++ API layer dumped via UE4SS so blueprint modders can subclass native TOW2 types; real game assets are absent and must be recreated via FModel dummies.
- `Source/Arkansas/Public` exposes ~2000 headers that mirror in-game classes (Indiana*, StatusEffect, Rpg*); Blueprint code inherits from these rather than duplicating gameplay.
- Everything assumes Windows + Visual Studio 2022; other host setups are untested and the automation scripts call `devenv` directly.

## Source layout & APIs
- `Source/Arkansas` is the primary game module; sibling modules (`Source/GameTelemetry`, `Source/OEISplineEmitter`, `Source/OEIVoiceOver`) host supporting systems referenced by the main Build.cs.
- `Plugins/OEI*` contains 30+ Obsidian plugins; pay attention to PreDefault loaders like `OEICommon`, `OEITickManager`, `OEIWwise`, `OEIFlowCharts`, `OEIWorldScriptActor`—breaking their load order causes editor startup failures.
- `Config/DefaultPlugins.ini` pre-enables the OEI stack along with ZoneGraph profiles; update it instead of toggling plugins inside the editor so the custom engine stays deterministic.
- `Content/Blueprints/AI` and `Content/Blueprints/Player` store sample behavior trees, AI controllers, and player blueprints that demonstrate how designers extend the dumped classes.
- Wwise/AkAudio integration is wired through `OEIWwise` plus stock `AkAudio`; audio-related changes typically also touch `Config/DefaultEngine.ini` and `Windows/WindowsEngine.ini`.

## Engine + build workflow
- Build the modified engine once, then point `%USERPROFILE%\Documents\UnrealEngine\5.4.4-TOW2` to it so `Build_Optimized.bat` can find `UnrealBuildTool.exe` and regenerate project files with `-2022` flags.
- Typical loop: run `Build_Optimized.bat`, which validates Visual Studio, regenerates solution files, and builds both `Development Editor` and `Development` targets before you launch `Arkansas.uproject`.
- `Arkansas.Build.cs` is tuned for fast iteration (Unity builds, shared PCHs, `bUsePrecompiled/bPrecompile`, AVX in Shipping); keep new dependencies minimal and prefer PublicIncludePaths already declared.
- Target files (`Arkansas.Target.cs`, `ArkansasEditor.Target.cs`) enforce BuildSettings V5, IncludeOrder 5.4, FastPDB, incremental linking, and hot reload; mirror those flags if you create new targets.
- Custom engine config lives under `Config/Windows/*.ini` and `Config/DefaultEngine.ini`—they set DX12, RHI threading, memory budgets, and plugin metadata; preserve these when adding new settings.

## Gameplay systems to know
- **Characters**: `IndianaCharacter` and `IndianaAICharacter` are the base hero/NPC types; companions, positioning, commands, and behavior trees extend from here.
- **Status & stats**: `StatusEffect`, `RpgStat`, and `RpgStatComponent` drive buffs, debuffs, and attribute progressions across combat and dialog checks.
- **Conversation**: `OEIFlowCharts` manages branching dialog graphs; nodes reference faction reputation and quest globals supplied by `OEIGlobalVariables` and `OEIScripting`.
- **Inventory & gear**: `ItemDefinition` variants plus customization modules (`OEICharacterCustomization`, `OEIMultiSkeletalMesh`) define equipment data and visual swaps.
- **Combat**: Systems assume Tactical Time Dilation, aim assist (`OEIAimAssist`), Wwise-driven audio cues, and Tick orchestration via `OEITickManager`.

## Modding & asset workflow
- Use FModel to extract/create placeholder assets, then author Blueprints that inherit from the exported C++ types; never edit dumped engine classes directly.
- Blueprint authors follow event-driven patterns (see `Source/Arkansas/Public/ArkansasPerformanceUtils.h`): favor dispatchers, timers, and cached component refs instead of heavy Tick usage.
- Packaging a playable mod still requires KZekai’s **Simple Mod Loader**—this project just builds the class library you inherit from before cooking content.
- Missing in-game data (strings, audio banks, prefabs) must be stubbed or referenced through the OEI plugins; check `Plugins/OEIStringDatabase`, `OEIWwise`, and `OEIPrefabricator` before adding new subsystems.
- Keep blueprint folders mirroring the existing convention (`Content/Blueprints/AI`, `Player`, `UI`) so designers can swap in their assets without editor path churn.

## Performance & debugging
- `PERFORMANCE_OPTIMIZATIONS.md` explains every build/editor/runtime tweak already applied—consult it before changing compiler flags or GC/threading settings.
- `ArkansasPerformanceUtils.h` doubles as an in-source playbook with macro helpers (`ARKANSAS_PROFILE_SCOPE`) and runtime console commands (`r.Streaming.PoolSize 3000`, `a.ParallelAnimUpdate 1`, `gc.MaxObjectsNotConsideredByGC 1`).
- Build automation expects Visual Studio `devenv` builds; if you switch to `MSBuild` or `UBT` CLI, mirror the configurations produced by `Build_Optimized.bat` to avoid mismatched PDBs.
- Runtime tuning leans on DX12 + RHI threading (`r.RHIThread=1`, `au.MaxChannels=32`, etc.) set in `Config/DefaultEngine.ini` and `Windows/WindowsEngine.ini`; keep those aligned with the custom engine.
- When adding new OEI modules, update `Arkansas.Build.cs` dependencies and `Config/DefaultPlugins.ini` together so PreDefault-loading modules remain stable.