#pragma once
#include "CoreMinimal.h"
#include "ComputerInsufficientSkillDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputerInsufficientSkill, AActor*, Initiator);

