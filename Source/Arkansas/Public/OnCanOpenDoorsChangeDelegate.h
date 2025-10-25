#pragma once
#include "CoreMinimal.h"
#include "OnCanOpenDoorsChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanOpenDoorsChange, bool, bCanOpenDoors);

