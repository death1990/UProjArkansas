#pragma once
#include "CoreMinimal.h"
#include "ECameraParamsScore.generated.h"

UENUM(BlueprintType)
enum class ECameraParamsScore : uint8 {
    Invalid,
    Fail,
    InitialEnvSweepFail,
    InitialEnvCharSweepFail,
    EnvClear,
    InitialEnvCharSweepEnv,
    EnvCharClear,
};

