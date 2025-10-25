#pragma once
#include "CoreMinimal.h"
#include "OnPetSelectionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPetSelectionStateChanged, const FName&, PetId, bool, bIsSelected);

