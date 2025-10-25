#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "LockpickSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class ULockpickSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    ULockpickSkill();

};

