#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include <SpeakerReference.h>
#include "OEISpeakerEmotionSettings.h"
#include "Templates/SubclassOf.h"
#include "OEIGlobalCinematicsSettings.generated.h"

class UOEICinePresentationMode;
class UStagePrefabAsset;

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEIGlobalCinematicsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSpeakerReference, FOEISpeakerEmotionSettings> SpeakerDefaultEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, TSoftObjectPtr<UStagePrefabAsset>> ConversationStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, TSubclassOf<UOEICinePresentationMode>> PresentationMode;
    
    UOEIGlobalCinematicsSettings();

};

