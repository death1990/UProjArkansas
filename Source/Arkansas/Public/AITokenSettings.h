#pragma once
#include "CoreMinimal.h"
#include "EAITokenTargetType.h"
#include "EAITokenType.h"
#include "AITokenSettings.generated.h"

USTRUCT(BlueprintType)
struct FAITokenSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndividualCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EAITokenType> LinkedCooldownTokenTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EAITokenType> LinkedTriggerTokenTypes;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAITokenTargetType TargetTypes[9];
    
public:
    ARKANSAS_API FAITokenSettings();
};

