#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEIVoiceOverPerUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class OEIVOICEOVER_API UOEIVoiceOverPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UOEIVoiceOverPerUserSettings();

};

