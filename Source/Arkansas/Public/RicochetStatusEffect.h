#pragma once
#include "CoreMinimal.h"
#include "DamageStatusEffect.h"
#include "RicochetStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URicochetStatusEffect : public UDamageStatusEffect {
    GENERATED_BODY()
public:
    URicochetStatusEffect();

};

