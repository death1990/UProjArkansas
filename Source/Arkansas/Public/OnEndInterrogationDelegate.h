#pragma once
#include "CoreMinimal.h"
#include "ECrimeType.h"
#include "EInterrogationResult.h"
#include "OnEndInterrogationDelegate.generated.h"

class AIndianaAiCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnEndInterrogation, EInterrogationResult, InterrogationResult, AIndianaAiCharacter*, Interrogator, ECrimeType, InterrogationCrime, bool, bDisguised, int32, DisguiseInterrogationsPassed);

