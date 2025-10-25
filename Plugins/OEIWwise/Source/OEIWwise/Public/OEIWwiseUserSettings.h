#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEIWwiseUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class OEIWWISE_API UOEIWwiseUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultAutoPost;
    
    UOEIWwiseUserSettings();

};

