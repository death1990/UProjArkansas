#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EncounterVisualizationDeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ARKANSAS_API UEncounterVisualizationDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UEncounterVisualizationDeveloperSettings();

};

