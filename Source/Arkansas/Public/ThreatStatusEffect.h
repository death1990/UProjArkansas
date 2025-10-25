#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ThreatStatusEffect.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_ThreatStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearSwitchTargetCooldown;
    
public:
    UDEPRECATED_ThreatStatusEffect();

};

