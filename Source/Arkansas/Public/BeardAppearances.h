#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "BeardAppearance.h"
#include "BeardAppearances.generated.h"

UCLASS(Blueprintable)
class UBeardAppearances : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBeardAppearance> BeardAppearances;
    
public:
    UBeardAppearances();

};

