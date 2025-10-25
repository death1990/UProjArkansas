#pragma once
#include "CoreMinimal.h"
#include "ThrowableAnimInstance.h"
#include "P1PThrowableAnimInstance.generated.h"

class UP1PThrowableAnimationSet;

UCLASS(Blueprintable, NonTransient)
class ARKANSAS_API UP1PThrowableAnimInstance : public UThrowableAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UP1PThrowableAnimationSet* P1PThrowAnimations;
    
public:
    UP1PThrowableAnimInstance();

};

