#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnKillBPDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnKillBP, AActor*, Killer, AActor*, Victim, const FCauseDamageInfo&, CauseDamageInfo);

