#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPerkTagChangedDelegate.generated.h"

class UPerk;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPerkTagChanged, TSubclassOf<UPerk>, Perk, bool, bIsTagged);

