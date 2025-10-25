#include "BountyNotificationWidget.h"

UBountyNotificationWidget::UBountyNotificationWidget() {
    this->FactionStandingImage = NULL;
    this->FactionStandingTextBlock = NULL;
    this->TitleTextBlock = NULL;
    this->BountyAmountTextBlock = NULL;
    this->BountyDeltaTextBlock = NULL;
    this->ContainerScaleBox = NULL;
    this->BountyCleared = NULL;
    this->BountyIncreased = NULL;
    this->BountyDecreased = NULL;
    this->BountyOutro = NULL;
}

void UBountyNotificationWidget::OnScaleSettingChanged(float NewValue) {
}

void UBountyNotificationWidget::OnNotificationDurationChanged(int32 NotificationDurationIn) {
}


