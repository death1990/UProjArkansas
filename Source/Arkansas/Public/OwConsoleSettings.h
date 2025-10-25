#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "AutoCompleteConsoleCommandData.h"
#include "OwConsoleSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UOwConsoleSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FAutoCompleteConsoleCommandData> AutoCompleteConsoleCommands;
    
    UOwConsoleSettings();

};

