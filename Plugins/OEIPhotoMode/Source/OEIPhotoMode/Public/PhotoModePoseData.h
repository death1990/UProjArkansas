#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PhotoModePose.h"
#include "PhotoModePoseData.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModePoseData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModePose> Poses;
    
    UPhotoModePoseData();

};

