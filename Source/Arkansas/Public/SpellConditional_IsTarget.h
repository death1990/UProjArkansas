#pragma once
#include "CoreMinimal.h"
#include "ETargetConditionals.h"
#include "SpellConditional.h"
#include "SpellConditional_IsTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_IsTarget : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetConditionals TargetConditionals;
    
public:
    USpellConditional_IsTarget();

};

