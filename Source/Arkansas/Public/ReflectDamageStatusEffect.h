#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ReflectDamageStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UReflectDamageStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectScalar;
    
public:
    UReflectDamageStatusEffect();

};

