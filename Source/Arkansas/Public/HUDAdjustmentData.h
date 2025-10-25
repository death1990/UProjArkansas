#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "HUDAdjustment.h"
#include "HUDAdjustmentData.generated.h"

UCLASS(Blueprintable)
class UHUDAdjustmentData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDAdjustment> AdjustmentData;
    
    UHUDAdjustmentData();

};

