#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SettingsMenuSlotEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuSlotEntryBase : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    USettingsMenuSlotEntryBase();

};

