#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_IsDormant.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UBTDecorator_IsDormant : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsDormant();

};

