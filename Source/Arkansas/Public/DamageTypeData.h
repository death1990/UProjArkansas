#pragma once
#include "CoreMinimal.h"
#include "DamageTypeColors.h"
#include "HitTypeData.h"
#include "DamageTypeData.generated.h"

USTRUCT(BlueprintType)
struct FDamageTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageTypeColors ColorForDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitTypeData AnimationForDamageType;
    
    ARKANSAS_API FDamageTypeData();
};

