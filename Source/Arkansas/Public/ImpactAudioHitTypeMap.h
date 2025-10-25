#pragma once
#include "CoreMinimal.h"
#include "ImpactAudioHitSubTypeMap.h"
#include "ImpactAudioHitTypeMap.generated.h"

class UIndianaDamageType;

USTRUCT(BlueprintType)
struct FImpactAudioHitTypeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActLike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIndianaDamageType> ActLikeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactAudioHitSubTypeMap GeneralImpactTypeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactAudioHitSubTypeMap PowerAttackImpactTypeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUniqueDestructibleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpactAudioHitSubTypeMap DestructibleImpactTypeSet;
    
    ARKANSAS_API FImpactAudioHitTypeMap();
};

