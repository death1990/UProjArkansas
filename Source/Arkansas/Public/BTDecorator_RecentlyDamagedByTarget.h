#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_RecentlyDamagedByTarget.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_RecentlyDamagedByTarget : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_RecentlyDamagedByTarget();

};

