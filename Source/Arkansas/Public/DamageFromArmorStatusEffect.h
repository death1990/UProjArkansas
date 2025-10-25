#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DamageFromArmorStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDamageFromArmorStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
public:
    UDamageFromArmorStatusEffect();

};

