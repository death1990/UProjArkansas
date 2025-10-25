#pragma once
#include "CoreMinimal.h"
#include "ERecoilState.generated.h"

UENUM(BlueprintType)
enum class ERecoilState : uint8 {
    Active,
    ReturnToZero,
    Inactive,
};

