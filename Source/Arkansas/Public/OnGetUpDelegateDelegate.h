#pragma once
#include "CoreMinimal.h"
#include "OnGetUpDelegateDelegate.generated.h"

class UTPVAnimInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetUpDelegate, UTPVAnimInstance*, AnimInstance, bool, bBegan);

