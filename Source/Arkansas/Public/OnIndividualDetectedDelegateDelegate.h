#pragma once
#include "CoreMinimal.h"
#include "OnIndividualDetectedDelegateDelegate.generated.h"

class AActor;
class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnIndividualDetectedDelegate, AActor*, Detectee, AIndianaAiCharacter*, Detector, int32, DetectorCount);

