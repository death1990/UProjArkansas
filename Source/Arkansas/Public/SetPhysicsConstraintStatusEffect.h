#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "SetPhysicsConstraintStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USetPhysicsConstraintStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
public:
    USetPhysicsConstraintStatusEffect();

};

