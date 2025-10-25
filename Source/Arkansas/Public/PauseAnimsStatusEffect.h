#pragma once
#include "CoreMinimal.h"
#include "DisableStatusEffect.h"
#include "PauseAnimsStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UPauseAnimsStatusEffect : public UDisableStatusEffect {
    GENERATED_BODY()
public:
    UPauseAnimsStatusEffect();

};

