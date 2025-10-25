#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "QueryPair.h"
#include "RandomQuerySet.generated.h"

UCLASS(Blueprintable)
class URandomQuerySet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueryPair> QueryCostPairs;
    
public:
    URandomQuerySet();

};

