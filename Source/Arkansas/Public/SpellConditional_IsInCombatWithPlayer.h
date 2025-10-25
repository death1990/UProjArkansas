#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsInCombatWithPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsInCombatWithPlayer : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegateCheck;
    
public:
    USpellConditional_IsInCombatWithPlayer();

};

