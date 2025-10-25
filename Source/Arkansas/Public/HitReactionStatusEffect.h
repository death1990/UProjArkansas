#pragma once
#include "CoreMinimal.h"
#include "EHitReactType.h"
#include "StatusEffect.h"
#include "HitReactionStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHitReactionStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitReactType HitReaction;
    
public:
    UHitReactionStatusEffect();

};

