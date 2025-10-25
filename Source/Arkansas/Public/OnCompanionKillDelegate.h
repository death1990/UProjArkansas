#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnCompanionKillDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCompanionKill, AActor*, Killer, AActor*, Victim, const FCauseDamageInfo&, CauseDamageInfo);

