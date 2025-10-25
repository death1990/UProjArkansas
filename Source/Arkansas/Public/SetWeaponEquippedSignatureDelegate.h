#pragma once
#include "CoreMinimal.h"
#include "SetWeaponEquippedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetWeaponEquippedSignature, int32, WeaponIndex);

