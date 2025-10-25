#include "ButtonBaseContainerWidget.h"

UButtonBaseContainerWidget::UButtonBaseContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bBlockDisplayBehaviorWhenLocked = true;
    this->bBlockDisablesButton = true;
    this->Button = NULL;
    this->TextBlock = NULL;
    this->InterestIcon = NULL;
    this->LockedIcon = NULL;
    this->ButtonSizeBox = NULL;
}

void UButtonBaseContainerWidget::SetLocked(bool bLocked, bool bForceState) {
}

void UButtonBaseContainerWidget::SetEnabled(bool bEnabled) {
}




bool UButtonBaseContainerWidget::GetIsButtonLocked() const {
    return false;
}

bool UButtonBaseContainerWidget::GetIsButtonEnabled() const {
    return false;
}

void UButtonBaseContainerWidget::ActivateInterestIcon(bool bActivate) {
}


