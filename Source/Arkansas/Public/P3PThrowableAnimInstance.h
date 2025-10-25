#pragma once
#include "CoreMinimal.h"
#include "ThrowableAnimInstance.h"
#include "P3PThrowableAnimInstance.generated.h"

class UP3PThrowableAnimationSet;

UCLASS(Blueprintable, NonTransient)
class ARKANSAS_API UP3PThrowableAnimInstance : public UThrowableAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UP3PThrowableAnimationSet* P3PThrowAnimations;
    
public:
    UP3PThrowableAnimInstance();

};

