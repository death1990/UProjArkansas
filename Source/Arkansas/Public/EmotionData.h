#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EmotionBodyEntry.h"
#include "EmotionFacialEntry.h"
#include "EmotionData.generated.h"

UCLASS(Blueprintable)
class UEmotionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmotionBodyEntry> EmotionBodyIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmotionFacialEntry> EmotionFacialIdles;
    
    UEmotionData();

};

