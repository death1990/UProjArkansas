#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "OEIGlobalVoiceOverSettings.generated.h"

UCLASS(Blueprintable)
class OEIVOICEOVER_API UOEIGlobalVoiceOverSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UOEIGlobalVoiceOverSettings();

};

