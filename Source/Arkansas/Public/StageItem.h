#pragma once
#include "CoreMinimal.h"
#include "ItemVisualizer.h"
#include "StageItem.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class AStageItem : public AItemVisualizer {
    GENERATED_BODY()
public:
    AStageItem(const FObjectInitializer& ObjectInitializer);

};

