#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "SpellConditional_IsHostileToCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsHostileToCaster : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegateCheck;
    
public:
    USpellConditional_IsHostileToCaster();

};

