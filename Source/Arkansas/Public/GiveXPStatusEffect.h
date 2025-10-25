#pragma once
#include "CoreMinimal.h"
#include "EXPGainReason.h"
#include "StatusEffect.h"
#include "GiveXPStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGiveXPStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXPGainReason XPGainReason;
    
public:
    UGiveXPStatusEffect();

};

