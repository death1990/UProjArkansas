#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "MultiStatusEffect.generated.h"

class USpellConditional;

UCLASS(Blueprintable, EditInlineNew)
class UMultiStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpellConditional*> AttackFilterConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> ChildStatusEffects;
    
public:
    UMultiStatusEffect();

};

