#pragma once
#include "CoreMinimal.h"
#include "EGBSynchronizedPatrolRoleType.generated.h"

UENUM(BlueprintType)
enum class EGBSynchronizedPatrolRoleType : uint8 {
    Caller,
    Responder,
    NoResponse,
    StartInvestigate,
};

