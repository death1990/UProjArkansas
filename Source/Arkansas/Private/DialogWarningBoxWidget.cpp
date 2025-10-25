#include "DialogWarningBoxWidget.h"

UDialogWarningBoxWidget::UDialogWarningBoxWidget() {
    this->bStopOnlyGameInput = true;
    this->ConfirmLabel = NULL;
    this->BackLabel = NULL;
    this->BodyTextblock = NULL;
    this->KeyboardInputBox = NULL;
    this->GamepadInputBox = NULL;
    this->ConfirmButton = NULL;
    this->CancelButton = NULL;
}

void UDialogWarningBoxWidget::OnInputConfirm() {
}

void UDialogWarningBoxWidget::OnInputBack() {
}


