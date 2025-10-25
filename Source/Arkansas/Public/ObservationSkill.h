#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "ObservationSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class UObservationSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    UObservationSkill();

};

