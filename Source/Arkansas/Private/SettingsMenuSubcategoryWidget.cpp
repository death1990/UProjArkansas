#include "SettingsMenuSubcategoryWidget.h"

USettingsMenuSubcategoryWidget::USettingsMenuSubcategoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ApplyButton = NULL;
    this->CategoryNameText = NULL;
    this->SlotsVerticalBox = NULL;
    this->SubcategorySlotClass = NULL;
}


