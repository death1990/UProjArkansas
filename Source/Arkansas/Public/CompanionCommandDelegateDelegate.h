#pragma once
#include "CoreMinimal.h"
#include "CompanionCommandInfo.h"
#include "CompanionCommandDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompanionCommandDelegate, const FCompanionCommandInfo&, Info);

