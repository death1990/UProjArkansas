#pragma once
#include "CoreMinimal.h"
#include "AttackFilterConditional.h"
#include "ETargetConditionals.h"
#include "AttackFilterConditional_IsTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAttackFilterConditional_IsTarget : public UAttackFilterConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetConditionals TargetConditionals;
    
public:
    UAttackFilterConditional_IsTarget();

};

