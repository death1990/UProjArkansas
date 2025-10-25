#include "GenericListEntryWidget.h"

UGenericListEntryWidget::UGenericListEntryWidget() {
    this->bOverrideDisplayMaximum = false;
    this->DisplayMaximumValue = 0.00f;
    this->bDisplayNameOnly = false;
    this->bResizeValueIcon = true;
    this->NameOnlyJustification = ETextJustify::Center;
    this->ValueParamName = TEXT("MaskShift");
    this->ValueMaterial = NULL;
    this->bHideValueMaterialIfEmpty = false;
    this->OversizeTextThreshold = 5;
    this->Button = NULL;
    this->NameTextBlock = NULL;
    this->ValuePanelWidget = NULL;
    this->ValueTextBlock = NULL;
    this->OversizedValueTextBlock = NULL;
    this->ValueIcon = NULL;
    this->ExtendedValueIcon = NULL;
    this->ExtendedDisplay = NULL;
    this->CurrentValueMaterial = NULL;
    this->CurrentExtendedValueMaterial = NULL;
}

void UGenericListEntryWidget::SetNameTextFromString(const FString& NameAsString) {
}

void UGenericListEntryWidget::SetNameText(const FLocString& NameAsLocString) {
}

void UGenericListEntryWidget::SetDisplayNameOnly(bool bDisplayNameOnlyIn, bool bForceDisplayOverride) {
}

void UGenericListEntryWidget::SetDescriptionTextFromLocString(const FLocString& DescLocString) {
}





FLocString UGenericListEntryWidget::GetNameLocString() const {
    return FLocString{};
}

FLocString UGenericListEntryWidget::GetDescriptionLocString() const {
    return FLocString{};
}

UButtonBase* UGenericListEntryWidget::GetButton() const {
    return NULL;
}

void UGenericListEntryWidget::FontSizeModifierChanged(int32 ModifierIn) {
}


