#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsInCrouchArea.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsInCrouchArea : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsInCrouchArea();

};

