#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_HasQueuedCompanionTeleport.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_HasQueuedCompanionTeleport : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
    UBTDecorator_HasQueuedCompanionTeleport();

};

