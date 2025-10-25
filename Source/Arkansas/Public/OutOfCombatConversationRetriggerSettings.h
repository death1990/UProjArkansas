#pragma once
#include "CoreMinimal.h"
#include "OutOfCombatConversationRetriggerSettings.generated.h"

USTRUCT(BlueprintType)
struct FOutOfCombatConversationRetriggerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRetrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetriggerCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyRetriggerOnRadiusReentry;
    
    ARKANSAS_API FOutOfCombatConversationRetriggerSettings();
};

