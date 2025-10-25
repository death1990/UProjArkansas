#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_TargetNotSeenForTime.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_TargetNotSeenForTime : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
public:
    UBTDecorator_TargetNotSeenForTime();

};

