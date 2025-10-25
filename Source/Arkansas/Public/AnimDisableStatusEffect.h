#pragma once
#include "CoreMinimal.h"
#include "DisableStatusEffect.h"
#include "AnimDisableStatusEffect.generated.h"

class URpgStat;

UCLASS(Blueprintable, EditInlineNew)
class UAnimDisableStatusEffect : public UDisableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopForDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* DurationStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidIfNoAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmobilizeMovement;
    
public:
    UAnimDisableStatusEffect();

};

