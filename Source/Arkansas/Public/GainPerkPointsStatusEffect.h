#pragma once
#include "CoreMinimal.h"
#include "EPerkPointGainType.h"
#include "StatusEffect.h"
#include "GainPerkPointsStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGainPerkPointsStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerkPointGainType PerkPointGainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelsPerPoint;
    
public:
    UGainPerkPointsStatusEffect();

};

