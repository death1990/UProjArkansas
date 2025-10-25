#pragma once
#include "CoreMinimal.h"
#include "DeathBehavior.h"
#include "RagDollDeathBehavior.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URagDollDeathBehavior : public UDeathBehavior {
    GENERATED_BODY()
public:
    URagDollDeathBehavior();

};

