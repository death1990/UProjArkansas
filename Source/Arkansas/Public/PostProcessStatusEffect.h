#pragma once
#include "CoreMinimal.h"
#include "PostProcessFX.h"
#include "StatusEffect.h"
#include "PostProcessStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPostProcessStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessFX PostProcessData;
    
public:
    UPostProcessStatusEffect();

};

