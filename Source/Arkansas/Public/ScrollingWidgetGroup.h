#pragma once
#include "CoreMinimal.h"
#include "TransitionGroup.h"
#include "ScrollingWidgetGroup.generated.h"

UCLASS(Blueprintable)
class UScrollingWidgetGroup : public UTransitionGroup {
    GENERATED_BODY()
public:
    UScrollingWidgetGroup();

protected:
    UFUNCTION(BlueprintCallable)
    void OnScrollingComplete();
    
};

