#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ResurrectStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UResurrectStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentMaxHealthOnResurrect;
    
public:
    UResurrectStatusEffect();

};

