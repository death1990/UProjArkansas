#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "Templates/SubclassOf.h"
#include "SpellConditional_HasSpell.generated.h"

class USpell;

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_HasSpell : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> CastSpell;
    
public:
    USpellConditional_HasSpell();

};

