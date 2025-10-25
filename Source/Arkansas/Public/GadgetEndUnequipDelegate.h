#pragma once
#include "CoreMinimal.h"
#include "GadgetEndUnequipDelegate.generated.h"

class UGadget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGadgetEndUnequip, UGadget*, Gadget);

