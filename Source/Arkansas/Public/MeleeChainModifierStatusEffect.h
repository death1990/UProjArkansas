#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "MeleeChainModifierStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UMeleeChainModifierStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlimited;
    
public:
    UMeleeChainModifierStatusEffect();

};

