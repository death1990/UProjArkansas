#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsPlayerInCombat.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsPlayerInCombat : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsPlayerInCombat();

};

