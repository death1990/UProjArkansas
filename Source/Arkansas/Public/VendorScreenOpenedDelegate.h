#pragma once
#include "CoreMinimal.h"
#include "VendorScreenOpenedDelegate.generated.h"

class UVendorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendorScreenOpened, const UVendorComponent*, VendorComponent);

