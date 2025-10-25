#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "StatusEffect.h"
#include "CCMaxChargeCountStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCCMaxChargeCountStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChargeCount;
    
public:
    UCCMaxChargeCountStatusEffect();

};

