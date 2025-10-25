#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ConversationLightingRigSettings.h"
#include "OwConversationSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ARKANSAS_API UOwConversationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FConversationLightingRigSettings ConversationLightingRigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenOwnerAndPlayerMarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float MinFailsafeDistanceBetweenNonOwnerMarks;
    
    UOwConversationSettings();

};

