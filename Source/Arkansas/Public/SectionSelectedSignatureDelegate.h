#pragma once
#include "CoreMinimal.h"
#include "SectionSelectedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSectionSelectedSignature, int32, Index);

