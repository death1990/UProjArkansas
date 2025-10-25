#pragma once
#include "CoreMinimal.h"
#include "EAudioOneShotTraceFailBehavior.generated.h"

UENUM(BlueprintType)
enum class EAudioOneShotTraceFailBehavior : uint8 {
    PlayAnyway,
    Retry,
    Skip,
};

