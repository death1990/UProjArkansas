#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectInitialApplicationType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectInitialApplicationType : uint8 {
    StackIfAlreadyApplied,
    RemoveExistingIfAlreadyApplied,
    UseLongerDurationIfAlreadyApplied,
    AddDurationIfAlreadyApplied,
    DontApplyIfAlreadyApplied,
    StackSingleInstance,
};

