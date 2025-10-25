#pragma once
#include "CoreMinimal.h"
#include "EUnlockAbility.h"
#include "SpellConditional.h"
#include "SpellConditional_PlayerHasAbilityUnlocked.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_PlayerHasAbilityUnlocked : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockAbility UnlockAbility;
    
public:
    USpellConditional_PlayerHasAbilityUnlocked();

};

