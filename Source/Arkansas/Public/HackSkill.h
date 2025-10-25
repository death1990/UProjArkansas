#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "HackSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class UHackSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    UHackSkill();

};

