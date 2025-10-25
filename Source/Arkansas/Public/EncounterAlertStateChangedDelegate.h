#pragma once
#include "CoreMinimal.h"
#include "EAlertState.h"
#include "EncounterAlertStateChangedDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEncounterAlertStateChanged, AIndianaAiCharacter*, ResponsibleAiCharacter, EAlertState, PreviousAlertState, EAlertState, NewAlertState);

