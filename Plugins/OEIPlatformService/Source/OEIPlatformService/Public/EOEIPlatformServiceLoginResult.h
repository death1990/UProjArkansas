#pragma once
#include "CoreMinimal.h"
#include "EOEIPlatformServiceLoginResult.generated.h"

UENUM(BlueprintType)
enum class EOEIPlatformServiceLoginResult : uint8 {
    Success_BEGIN,
    Success,
    Success_AlreadyLoggedIn,
    Success_END = 15,
    Fail_BEGIN,
    Fail_Unsupported,
    Fail_General,
    Fail_Cancel,
    Fail_AuthenticationFailed,
    Fail_ServerUnreachable,
    Fail_GameNotReleased,
    Fail_NoEarlyAccessEntitlement,
    Fail_NoBaseGameEntitlement,
    Fail_END = 31,
};

