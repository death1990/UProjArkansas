#pragma once
#include "CoreMinimal.h"
#include "DirectionalAnimDisableStatusEffect.h"
#include "AnimInstanceDisableStatusEffect.generated.h"

class AActor;
class UPlayAnimEventEffect;

UCLASS(Blueprintable, EditInlineNew)
class UAnimInstanceDisableStatusEffect : public UDirectionalAnimDisableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayAnimEventEffect* AnimEventEffect;
    
public:
    UAnimInstanceDisableStatusEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_IsEffectAllowed(AActor* Actor) const;
    
};

