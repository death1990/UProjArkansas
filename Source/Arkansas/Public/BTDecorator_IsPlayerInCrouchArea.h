#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsPlayerInCrouchArea.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsPlayerInCrouchArea : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsPlayerInCrouchArea();

};

