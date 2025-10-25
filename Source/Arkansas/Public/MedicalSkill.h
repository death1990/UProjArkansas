#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "MedicalSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class UMedicalSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    UMedicalSkill();

};

