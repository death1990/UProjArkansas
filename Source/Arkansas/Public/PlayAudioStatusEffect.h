#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "PlayAudioStatusEffect.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UPlayAudioStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ApplyAudioEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ClearAudioEffect;
    
public:
    UPlayAudioStatusEffect();

};

