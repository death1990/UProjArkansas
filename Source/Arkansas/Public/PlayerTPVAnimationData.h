#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PlayerTPVLocomotionAnimationData.h"
#include "PlayerTPVAnimationData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UPlayerTPVAnimationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTPVLocomotionAnimationData Data;
    
    UPlayerTPVAnimationData();

};

