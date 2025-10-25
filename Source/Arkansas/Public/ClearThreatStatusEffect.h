#pragma once
#include "CoreMinimal.h"
#include "EClearThreatTarget.h"
#include "StatusEffect.h"
#include "ClearThreatStatusEffect.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_ClearThreatStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EClearThreatTarget ClearTarget;
    
public:
    UDEPRECATED_ClearThreatStatusEffect();

};

