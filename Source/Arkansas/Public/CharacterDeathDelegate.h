#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "CharacterDeathDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterDeath, AActor*, Instigator, const FCauseDamageInfo&, CauseDamageInfo);

