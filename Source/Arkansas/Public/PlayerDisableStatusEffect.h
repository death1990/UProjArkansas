#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "PlayerDisableStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerDisableStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCompanionCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTimeDilation;
    
public:
    UPlayerDisableStatusEffect();

};

