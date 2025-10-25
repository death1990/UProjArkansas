#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsOnElevator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsOnElevator : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidIfOnElevator;
    
public:
    USpellConditional_IsOnElevator();

};

