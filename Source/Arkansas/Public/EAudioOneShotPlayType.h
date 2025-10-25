#pragma once
#include "CoreMinimal.h"
#include "EAudioOneShotPlayType.generated.h"

UENUM(BlueprintType)
enum class EAudioOneShotPlayType : uint8 {
    Shell,
    ShellTrace,
    Annulus,
    AnnulusTrace,
    TraceToGround,
};

