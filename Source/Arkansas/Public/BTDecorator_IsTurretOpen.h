#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsTurretOpen.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsTurretOpen : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsTurretOpen();

};

