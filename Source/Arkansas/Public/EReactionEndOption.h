#pragma once
#include "CoreMinimal.h"
#include "EReactionEndOption.generated.h"

UENUM(BlueprintType)
enum class EReactionEndOption : uint8 {
    Flinch,
    Disable,
};

