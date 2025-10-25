#pragma once
#include "CoreMinimal.h"
#include "EProxyTaskState.generated.h"

UENUM(BlueprintType)
enum class EProxyTaskState : uint8 {
    PlayingEnterMontage,
    Waiting,
    PlayingExitMontage,
    Idle,
    AwaitProxyInitialization,
};

