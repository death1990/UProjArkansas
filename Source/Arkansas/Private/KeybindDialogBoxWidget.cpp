#include "KeybindDialogBoxWidget.h"

UKeybindDialogBoxWidget::UKeybindDialogBoxWidget() {
    this->bStopOnlyGameInput = true;
    this->ContentVerticalBox = NULL;
    this->BackingBotSizeBox = NULL;
    this->ControlToRebindTextBlock = NULL;
    this->HowToTextBlock = NULL;
    this->KeyInputTextBlock = NULL;
    this->InputIcon = NULL;
    this->ContentVerticalPadding = 15.00f;
    this->BackingMaterialSize = 932;
    this->BackingTopSize = 101;
}


void UKeybindDialogBoxWidget::OnInputPress() {
}

void UKeybindDialogBoxWidget::OnInputBack() {
}


