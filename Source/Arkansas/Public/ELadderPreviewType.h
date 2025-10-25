#pragma once
#include "CoreMinimal.h"
#include "ELadderPreviewType.generated.h"

UENUM(BlueprintType)
enum class ELadderPreviewType : uint8 {
    Start,
    Loop,
    Exit,
};

