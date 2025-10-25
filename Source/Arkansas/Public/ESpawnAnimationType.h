#pragma once
#include "CoreMinimal.h"
#include "ESpawnAnimationType.generated.h"

UENUM(BlueprintType)
enum ESpawnAnimationType {
    AnimType_AnimProxy,
    AnimType_AnimMontage,
    AnimType_Spline,
    AnimType_Navigation,
};

