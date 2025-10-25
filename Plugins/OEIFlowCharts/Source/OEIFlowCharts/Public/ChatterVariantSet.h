#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=IDSet -FallbackName=IDSet
#include "ChatterVariantSet.generated.h"

USTRUCT(BlueprintType)
struct FChatterVariantSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LanguageCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FIDSet> Variants;
    
public:
    OEIFLOWCHARTS_API FChatterVariantSet();
};

