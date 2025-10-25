#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapTrapTriggerWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapTrapTriggerWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
    UMinimapTrapTriggerWidget();

};

