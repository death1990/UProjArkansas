#pragma once
#include "CoreMinimal.h"
#include "StimulusReference.h"
#include "CanTrackTargetAtLocationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FCanTrackTargetAtLocationDelegate, const FStimulusReference&, Stimulus);

