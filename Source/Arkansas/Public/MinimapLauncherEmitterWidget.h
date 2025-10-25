#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapLauncherEmitterWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapLauncherEmitterWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
    UMinimapLauncherEmitterWidget();

};

