#include "QuestLogComboBoxWidget.h"

UQuestLogComboBoxWidget::UQuestLogComboBoxWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ComboBox = NULL;
}

void UQuestLogComboBoxWidget::OnValueChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UQuestLogComboBoxWidget::OnSortOptionIncrement() {
}


