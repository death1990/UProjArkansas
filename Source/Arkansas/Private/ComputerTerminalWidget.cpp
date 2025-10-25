#include "ComputerTerminalWidget.h"

UComputerTerminalWidget::UComputerTerminalWidget() {
    this->BodyTextAnimationDuration = 3.00f;
    this->GamepadZoomMultiplier = 0.00f;
    this->BodyTextblock = NULL;
    this->ConversationTextScrollBox = NULL;
    this->SidePanelInfoWidget = NULL;
    this->InputLabelGroup = NULL;
}

void UComputerTerminalWidget::OnExitInputAction() {
}

void UComputerTerminalWidget::OnConversationEnded() {
}


