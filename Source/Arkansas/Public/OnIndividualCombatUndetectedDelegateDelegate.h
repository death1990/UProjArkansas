#pragma once
#include "CoreMinimal.h"
#include "OnIndividualCombatUndetectedDelegateDelegate.generated.h"

class AActor;
class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIndividualCombatUndetectedDelegate, AActor*, Detectee, AIndianaAiCharacter*, Detector);

