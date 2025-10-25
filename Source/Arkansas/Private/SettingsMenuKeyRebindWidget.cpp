#include "SettingsMenuKeyRebindWidget.h"

USettingsMenuKeyRebindWidget::USettingsMenuKeyRebindWidget() {
    this->bIgnoreModifierKeys = true;
    this->RebindConflictDialogClass = NULL;
    this->SettingName = NULL;
    this->PrimaryKeySelector = NULL;
    this->SecondaryKeySelector = NULL;
    this->GameplayButton = NULL;
    this->EssentialWarningDisplay = NULL;
    this->UserSetting = NULL;
    this->SettingsMenu = NULL;
    this->ParentWidget = NULL;
    this->bIsSelecting = false;
    this->SelectionIndex = -1;
}

void USettingsMenuKeyRebindWidget::OnSecondaryIsSelectingKeyChanged(bool bIsSelectingKey) {
}

void USettingsMenuKeyRebindWidget::OnPrimaryIsSelectingKeyChanged(bool bIsSelectingKey) {
}

void USettingsMenuKeyRebindWidget::OnKeySelected(FInputChord InputChord) {
}

void USettingsMenuKeyRebindWidget::OnContainerClicked() {
}

void USettingsMenuKeyRebindWidget::OnBack() {
}


