#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsHostileToPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsHostileToPlayer : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegateCheck;
    
public:
    USpellConditional_IsHostileToPlayer();

};

