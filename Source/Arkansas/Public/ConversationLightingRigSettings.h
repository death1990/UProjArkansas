#pragma once
#include "CoreMinimal.h"
#include "ConversationLightingRigSettings.generated.h"

class AConversationLightingRig;

USTRUCT(BlueprintType)
struct ARKANSAS_API FConversationLightingRigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AConversationLightingRig> DefaultConversationLightingRigClass;
    
    FConversationLightingRigSettings();
};

