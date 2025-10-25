#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsOnPlayerShip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsOnPlayerShip : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegateCheck;
    
public:
    USpellConditional_IsOnPlayerShip();

};

