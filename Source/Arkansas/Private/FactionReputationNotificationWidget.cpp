#include "FactionReputationNotificationWidget.h"

UFactionReputationNotificationWidget::UFactionReputationNotificationWidget() {
    this->PositiveAnim = NULL;
    this->NegativeAnim = NULL;
    this->ReputationOutro = NULL;
    this->FactionStandingImage = NULL;
    this->FactionStandingTextBlock = NULL;
    this->ReputationProgressBar = NULL;
    this->PositiveDisplay = NULL;
    this->PositiveChangeImage = NULL;
    this->PositiveValueText = NULL;
    this->NegativeDisplay = NULL;
    this->NegativeChangeImage = NULL;
    this->NegativeValueText = NULL;
    this->OffsetParameter = TEXT("Offset");
    this->AbrasiveParameter = TEXT("AbrasiveEnabled");
    this->WittyParameter = TEXT("WittyEnabled");
    this->RepMovementSpeed = 0.50f;
    this->ReputationBarMaterial = NULL;
    this->ContainerScaleBox = NULL;
}

void UFactionReputationNotificationWidget::OnScaleSettingChanged(float NewValue) {
}

void UFactionReputationNotificationWidget::OnNotificationDurationChanged(int32 NotificationDurationIn) {
}


