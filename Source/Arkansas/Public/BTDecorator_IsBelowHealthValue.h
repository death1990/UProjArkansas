#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsBelowHealthValue.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsBelowHealthValue : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedHealthThreshold;
    
public:
    UBTDecorator_IsBelowHealthValue();

};

