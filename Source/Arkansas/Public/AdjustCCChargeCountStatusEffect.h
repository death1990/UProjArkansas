#pragma once
#include "CoreMinimal.h"
#include "EChargeCountChange.h"
#include "ECompanionCommand.h"
#include "StatusEffect.h"
#include "AdjustCCChargeCountStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAdjustCCChargeCountStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChargeCountChange ChargeCountChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UAdjustCCChargeCountStatusEffect();

};

