#pragma once
#include "CoreMinimal.h"
#include "Pickup.h"
#include "UnspecifiedPickup.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AUnspecifiedPickup : public APickup {
    GENERATED_BODY()
public:
    AUnspecifiedPickup(const FObjectInitializer& ObjectInitializer);

};

