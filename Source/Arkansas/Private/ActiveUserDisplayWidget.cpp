#include "ActiveUserDisplayWidget.h"

UActiveUserDisplayWidget::UActiveUserDisplayWidget() {
    this->UserNameTextBlock = NULL;
    this->DefaultSignedInDisplay = NULL;
    this->DefaultPlatformImage = NULL;
    this->CrossPlatformSignedInDisplay = NULL;
    this->CrossPlatformImage = NULL;
    this->CrossPlatformUserNameTextBlock = NULL;
}

void UActiveUserDisplayWidget::OnLoginStatusChanged(bool bOldAvailability, bool bNewAvailability, EOEIPlatformServiceProvider Provider) {
}


