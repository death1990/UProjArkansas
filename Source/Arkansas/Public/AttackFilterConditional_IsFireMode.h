#pragma once
#include "CoreMinimal.h"
#include "AttackFilterConditional.h"
#include "EFireMode.h"
#include "AttackFilterConditional_IsFireMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAttackFilterConditional_IsFireMode : public UAttackFilterConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireMode FireMode;
    
public:
    UAttackFilterConditional_IsFireMode();

};

