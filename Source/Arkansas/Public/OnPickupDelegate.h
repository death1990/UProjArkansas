#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "OnPickupDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPickup, AActor*, Initiator, EInteractionType, Interaction);

