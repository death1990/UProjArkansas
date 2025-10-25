#include "InputWidget.h"

UInputWidget::UInputWidget() {
    this->Axis = 0.00f;
    this->bIsNavigationPrompt = false;
    this->bDisplayKeyboardMouse = false;
    this->bDisplayGamepad = true;
    this->KeyboardMasterOverlay = NULL;
    this->GamepadIcon = NULL;
    this->GamepadMasterOverlay = NULL;
    this->KeyInputHoldlessTextBlock = NULL;
    this->KeyInputSizeBox = NULL;
    this->ButtonOverlay = NULL;
}

void UInputWidget::SetActionName(FName ActionName, float ActionAxis) {
}


