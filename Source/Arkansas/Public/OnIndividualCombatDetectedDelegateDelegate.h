#pragma once
#include "CoreMinimal.h"
#include "OnIndividualCombatDetectedDelegateDelegate.generated.h"

class AActor;
class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIndividualCombatDetectedDelegate, AActor*, Detectee, AIndianaAiCharacter*, Detector);

