#pragma once
#include "CoreMinimal.h"
#include "DropdownBoxWidgetBase.h"
#include "TextOnlyDropdownWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTextOnlyDropdownWidget : public UDropdownBoxWidgetBase {
    GENERATED_BODY()
public:
    UTextOnlyDropdownWidget();

};

