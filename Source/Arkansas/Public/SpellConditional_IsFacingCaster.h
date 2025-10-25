#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsFacingCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsFacingCaster : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidAngle;
    
public:
    USpellConditional_IsFacingCaster();

};

