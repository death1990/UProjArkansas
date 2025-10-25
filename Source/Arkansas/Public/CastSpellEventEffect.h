#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "Templates/SubclassOf.h"
#include "CastSpellEventEffect.generated.h"

class USpell;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCastSpellEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    UCastSpellEventEffect();

};

