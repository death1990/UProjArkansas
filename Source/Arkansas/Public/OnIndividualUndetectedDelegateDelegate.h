#pragma once
#include "CoreMinimal.h"
#include "OnIndividualUndetectedDelegateDelegate.generated.h"

class AActor;
class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnIndividualUndetectedDelegate, AActor*, Detectee, AIndianaAiCharacter*, Detector, int32, DetectorCount);

