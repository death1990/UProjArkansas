#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ElektrumStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UElektrumStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElektrumPerTick;
    
public:
    UElektrumStatusEffect();

};

