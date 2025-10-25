#pragma once
#include "CoreMinimal.h"
#include "SkillScalableStatusEffect.h"
#include "ScaleStatusEffect.generated.h"

class URpgStat;

UCLASS(Blueprintable, EditInlineNew)
class UScaleStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* ScaleStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCasterStats;
    
public:
    UScaleStatusEffect();

};

