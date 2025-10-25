#include "DialogBoxWidget.h"

UDialogBoxWidget::UDialogBoxWidget() {
    this->bStopOnlyGameInput = true;
    this->ConfirmLabel = NULL;
    this->AlternateLabel = NULL;
    this->BackLabel = NULL;
    this->ContentVerticalBox = NULL;
    this->BackingBotSizeBox = NULL;
    this->TextBlock = NULL;
    this->WarningTextBlock = NULL;
    this->ConfirmButton = NULL;
    this->ConfirmTextBlock = NULL;
    this->AlternateButton = NULL;
    this->AlternateTextBlock = NULL;
    this->CancelButton = NULL;
    this->CancelTextBlock = NULL;
    this->DialogContextIcon = NULL;
    this->ContentVerticalPadding = 15.00f;
    this->BackingMaterialSize = 932;
    this->BackingTopSize = 101;
    this->bEnableTimeout = false;
    this->TimeoutDuration = 0.00f;
    this->bTimeoutConfirmsPrompt = true;
}


void UDialogBoxWidget::OnInputConfirm() {
}

void UDialogBoxWidget::OnInputBack() {
}

void UDialogBoxWidget::ExecuteConfirm() {
}


