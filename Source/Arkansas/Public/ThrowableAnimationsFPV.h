#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ThrowableAnimationsFPV.generated.h"

class UP1PThrowableAnimationSet;
class UP3PThrowableAnimationSet;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class UThrowableAnimationsFPV : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP1PThrowableAnimationSet* FPVAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP3PThrowableAnimationSet* TPVAnimations;
    
public:
    UThrowableAnimationsFPV();

};

