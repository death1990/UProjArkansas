#pragma once
#include "CoreMinimal.h"
#include "IndianaSkill.h"
#include "SpeechSkill.generated.h"

UCLASS(Abstract, Blueprintable)
class USpeechSkill : public UIndianaSkill {
    GENERATED_BODY()
public:
    USpeechSkill();

};

