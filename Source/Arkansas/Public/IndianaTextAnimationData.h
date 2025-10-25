#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EIndianaTextAnimationType.h"
#include "TextAnimationData.h"
#include "IndianaTextAnimationData.generated.h"

UCLASS(Blueprintable)
class UIndianaTextAnimationData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIndianaTextAnimationType, FTextAnimationData> IndianaTextAnimationData;
    
public:
    UIndianaTextAnimationData();

};

