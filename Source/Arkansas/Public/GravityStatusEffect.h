#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GravityStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGravityStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewGravity;
    
public:
    UGravityStatusEffect();

};

