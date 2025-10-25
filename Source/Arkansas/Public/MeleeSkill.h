#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "MeleeSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class UMeleeSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    UMeleeSkill();

};

