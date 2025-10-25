#pragma once
#include "CoreMinimal.h"
#include "EFrontEndPhase.generated.h"

UENUM(BlueprintType)
enum class EFrontEndPhase : uint8 {
    None,
    ShaderPreCache,
    IntroVideos,
    PhotosensitivityWarning,
    Autosave,
    GammaControl,
    Accessibility,
    MainMenu,
};

