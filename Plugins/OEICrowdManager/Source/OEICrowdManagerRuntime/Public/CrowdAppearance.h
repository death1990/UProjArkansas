#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include <GameplayTagContainer.h>
#include "CrowdAppearanceArray.h"
#include "CrowdAppearance.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct FCrowdAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeleton> SkeletonBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdAppearanceArray AppearanceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAppearanceArray> RequiredAppearanceParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAppearanceArray> OptionalAppearanceParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint NumberOfOptionalRegionsToInclude;
    
    OEICROWDMANAGERRUNTIME_API FCrowdAppearance();
};

