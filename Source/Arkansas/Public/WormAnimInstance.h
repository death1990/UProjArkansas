#pragma once
#include "CoreMinimal.h"
#include "TPVAnimInstance.h"
#include "WormAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UWormAnimInstance : public UTPVAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> LocomotionTurnInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> CombatTurnInPlace;
    
    UWormAnimInstance();

};

