#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "NewHeadAppearance.h"
#include "HeadAppearances.generated.h"

class UPoseAsset;

UCLASS(Blueprintable)
class UHeadAppearances : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewHeadAppearance> HeadAppearances;
    
public:
    UHeadAppearances();

    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UPoseAsset> GetFacePoses();
    
};

