# Arkansas Project - Copilot Instructions

## Project Overview
This is a modding framework for **The Outer Worlds 2** created from UE4SS dumps. It provides C++ class foundations that blueprint modders can inherit from to create mods using native game classes.

## Critical Architecture Knowledge

### Custom Unreal Engine
- **Requires UE 5.4.4-TOW2**: Must build the modified engine from `https://github.com/nathtest/UnrealEngine/tree/5.4.4-TOW2`
- **Not standard UE**: Standard UE 5.4.4 will NOT work - uses Obsidian's custom modifications
- **Setup**: Right-click `Arkansas.uproject` → "Generate Visual Studio project files" → Compile in VS → Open editor

### OEI Plugin Ecosystem
The project revolves around **30+ custom Obsidian Entertainment plugins** in `/Plugins/OEI*`:
- **OEICommon**: Core tech foundation - loaded PreDefault phase
- **OEIFlowCharts**: Dialog/conversation system  
- **OEIWwise**: Audio integration with Wwise middleware
- **OEITickManager**: Custom tick management system
- **OEICinematics**: Cutscene and camera systems
- **OEIWorldScriptActor**: Level scripting framework

### Module Dependencies
Main module (`Source/Arkansas/Arkansas.Build.cs`) depends on:
```cpp
"OEIAimAssist", "OEIAnimationRuntime", "OEICharacterCustomization", 
"OEICinematics", "OEICommon", "OEIFlowCharts", "OEIGlobalVariables",
"OEIScripting", "OEISettings", "OEIText", "OEITickManager"
```

## Development Patterns

### Character System Architecture
- **IndianaCharacter**: Base character class (TOW2's codename was "Indiana")
- **IndianaAICharacter**: AI-controlled NPCs with behavior trees
- **Companion System**: Complex companion AI with commands, positioning, combat abilities
- **Status Effects**: Extensive modular status effect system via `StatusEffect` base class

### Key Gameplay Systems
- **RPG Stats**: `RpgStat`, `RpgStatComponent` - attribute/skill system
- **Reputation/Faction**: Complex faction relationship system
- **Conversation System**: Node-based dialog via OEIFlowCharts
- **Inventory**: Modular item system with `ItemDefinition` variants
- **Combat**: Melee/ranged with tactical time dilation (TTD)

### Asset Organization Conventions
```
Content/Blueprints/
├── AI/           # Behavior trees, AI controllers  
├── Player/       # Player-specific blueprints
Content/UI/       # User interface blueprints
Plugins/          # All custom OEI functionality
Source/Arkansas/  # Core game module
├── Public/       # ~2000+ header files (extensive API)
├── Private/      # Implementation files
```

## Critical Workflows

### Building & Testing
```bash
# Generate project files (Windows)
# Right-click Arkansas.uproject → "Generate Visual Studio project files"

# Build in Visual Studio
# Open Arkansas.sln → Build Solution (Development Editor config)

# Launch editor
# Double-click Arkansas.uproject (after building)
```

### Mod Development Pattern
1. **Use FModel** to create asset dummies for existing game content
2. **Inherit from Arkansas C++ classes** in Blueprint
3. **Override virtual functions** in Blueprint implementation  
4. **Use Simple Mod Loader** (by KZekai) for mod deployment

### Engine Configuration
- **Custom Engine Association**: `{712B673E-4DF2-5FF2-6216-73B007077982}` in `.uproject`
- **Critical Settings**: 30+ OEI plugins enabled, many standard UE plugins disabled
- **Audio**: Wwise integration required (not standard UE audio)

## Important Constraints

### Compatibility Requirements  
- **Must use custom UE 5.4.4-TOW2 build** - standard UE will fail
- **Blueprint-focused**: This provides C++ foundation, actual mods are Blueprint-based
- **Asset Dependencies**: Game assets not included - use FModel to extract needed references
- **Mod Loader**: Requires external mod loader for game integration

### File System Patterns
- **Headers in Public/**: ~2000 game class definitions expose full TOW2 API
- **OEI Namespace**: All custom systems prefixed with `OEI`  
- **Indiana Prefix**: Core gameplay classes use "Indiana" prefix (internal codename)
- **Config Extensive**: Complex engine configuration in `/Config` for TOW2 compatibility

## Performance Optimizations Applied

### Build System Enhancements
- **Unity Build**: Enabled for 30-50% faster compilation
- **Shared PCHs**: Reduced memory usage during builds
- **Platform Optimizations**: Windows-specific compiler settings
- **Hot Reload**: Enhanced editor iteration speed

### Runtime Optimizations  
- **Texture Streaming**: Optimized VRAM usage (3GB pool)
- **Animation System**: Parallel processing enabled
- **Memory Management**: Tuned GC thresholds
- **Audio Integration**: Wwise-optimized channel management

### Tools and Automation
- **Build_Optimized.bat**: Automated optimized build script  
- **ArkansasPerformanceUtils.h**: Performance guidelines and console commands
- **PERFORMANCE_OPTIMIZATIONS.md**: Comprehensive optimization documentation

### Key Performance Commands
```cpp
// Runtime console commands for performance tuning:
r.SetRes 1920x1080          // Optimal resolution
r.Streaming.PoolSize 3000   // Texture streaming optimization  
a.ParallelAnimUpdate 1      // Parallel animation processing
gc.MaxObjectsNotConsideredByGC 1  // GC optimization
```

When working with this project, prioritize understanding the OEI plugin dependencies and the fact that this is a **modding foundation**, not a standalone game. All development should consider Blueprint inheritance patterns, the external mod loading pipeline, and the extensive performance optimizations that have been applied for optimal Unreal Engine workflow.