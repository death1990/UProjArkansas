#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "PlayAnimationAction.generated.h"

class UAnimMontage;
class UPlayAnimEventEffect;

UCLASS(Blueprintable, EditInlineNew)
class UPlayAnimationAction : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayAnimEventEffect* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTime;
    
public:
    UPlayAnimationAction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
};

