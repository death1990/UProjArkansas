#pragma once
#include "CoreMinimal.h"
#include "MedKitUsedDelegate.generated.h"

class UEquipmentComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMedKitUsed, UEquipmentComponent*, EquipmentComponent, bool, bDoubleDose);

