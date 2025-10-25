#pragma once
#include "CoreMinimal.h"
#include "EFindSpeakerResultFlag.generated.h"

UENUM(BlueprintType)
enum class EFindSpeakerResultFlag : uint8 {
    None,
    Success,
    Fail,
    Dead = 4,
    InStasis = 8,
};

