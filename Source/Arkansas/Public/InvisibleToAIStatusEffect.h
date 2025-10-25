#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "InvisibleToAIStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UInvisibleToAIStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSilent;
    
public:
    UInvisibleToAIStatusEffect();

};

