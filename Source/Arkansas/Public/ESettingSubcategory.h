#pragma once
#include "CoreMinimal.h"
#include "ESettingSubcategory.generated.h"

UENUM(BlueprintType)
enum class ESettingSubcategory : uint8 {
    Invalid,
    GraphicsDisplay,
    GraphicsQuality,
    AudioVolume,
    ControlsController,
    Subtitles,
    SpeechBubbles,
    General,
    Quests,
    Movement,
    Gameplay,
    Menus,
    ControlsMouseKeyboard,
    UI,
    GameplayDisplay,
    HUD,
    Minimap,
    UIGeneral,
    GraphicsEffects,
    AimAssist,
    Skills,
    Perspective,
    StatusTags,
    Maps,
    Movies,
    Reticle,
};

