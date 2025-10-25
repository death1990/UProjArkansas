#pragma once
#include "CoreMinimal.h"
#include "EAlertState.h"
#include "SpellConditional.h"
#include "SpellConditional_IsAlertState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsAlertState : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertState AlertState;
    
public:
    USpellConditional_IsAlertState();

};

