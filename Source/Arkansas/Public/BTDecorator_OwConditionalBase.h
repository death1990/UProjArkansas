#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_OwConditionalBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTDecorator_OwConditionalBase : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_OwConditionalBase();

};

