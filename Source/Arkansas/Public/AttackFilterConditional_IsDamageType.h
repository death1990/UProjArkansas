#pragma once
#include "CoreMinimal.h"
#include "AttackFilterConditional.h"
#include "Templates/SubclassOf.h"
#include "AttackFilterConditional_IsDamageType.generated.h"

class UIndianaDamageType;

UCLASS(Blueprintable, EditInlineNew)
class UAttackFilterConditional_IsDamageType : public UAttackFilterConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaDamageType> DamageType;
    
public:
    UAttackFilterConditional_IsDamageType();

};

