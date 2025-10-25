#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EmotionBodyEntry.h"
#include "TalkingIdleEntry.h"
#include "TalkingIdleOverrideData.generated.h"

UCLASS(Blueprintable)
class UTalkingIdleOverrideData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkingIdleEntry> TalkingIdleOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmotionBodyEntry> TalkingIdleBodyEntry;
    
    UTalkingIdleOverrideData();

};

