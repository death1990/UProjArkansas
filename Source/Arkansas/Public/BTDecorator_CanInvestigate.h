#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_CanInvestigate.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_CanInvestigate : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_CanInvestigate();

};

