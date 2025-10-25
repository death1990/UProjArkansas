#include "TextEntryWidget.h"

UTextEntryWidget::UTextEntryWidget() {
    this->EditableTextField = NULL;
    this->CapacityTextBlock = NULL;
    this->BadNameWarning = NULL;
    this->CharacterMax = 20;
    this->CharacterMin = 1;
    this->HintTextColor = EIndianaUIColorType::Invalid;
}

void UTextEntryWidget::OnTextfieldCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitType) {
}

void UTextEntryWidget::OnTextfieldChanged(const FText& Text) {
}


