#pragma once
#include "CoreMinimal.h"
#include "SkillScalableStatusEffect.h"
#include "TTDStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTTDStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Adjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartTTD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopTTD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoFastDraining;
    
public:
    UTTDStatusEffect();

};

