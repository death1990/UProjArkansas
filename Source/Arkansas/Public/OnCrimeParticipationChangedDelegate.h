#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OnCrimeParticipationChangedDelegate.generated.h"

class AIndianaAiController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCrimeParticipationChanged, AIndianaAiController*, AIController, const FGuid, CrimeID);

