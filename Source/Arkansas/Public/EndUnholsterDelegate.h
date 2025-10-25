#pragma once
#include "CoreMinimal.h"
#include "EndUnholsterDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndUnholster, UWeapon*, Weapon);

