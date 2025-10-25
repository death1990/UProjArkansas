#pragma once
#include "CoreMinimal.h"
#include "EGadgetType.h"
#include "StatusEffect.h"
#include "ActivateGadgetStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UActivateGadgetStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetType GadgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeEnergy;
    
public:
    UActivateGadgetStatusEffect();

};

