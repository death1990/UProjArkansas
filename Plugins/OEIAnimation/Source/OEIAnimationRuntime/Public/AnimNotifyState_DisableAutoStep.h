#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"

#include "AnimNotifyState_DisableAutoStep.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIANIMATIONRUNTIME_API UAnimNotifyState_DisableAutoStep : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableAutoStep();

};

