#include "RadioNotificationWidget.h"

URadioNotificationWidget::URadioNotificationWidget() {
    this->bAlwaysShowNotifOnStationDiscovered = true;
    this->RadioNotificationPanel = NULL;
    this->StationNameText = NULL;
    this->RadioNotificationInput = NULL;
    this->RadioIndicator = NULL;
    this->RadioIndicatorTexture = NULL;
    this->RadioNotificationFade = NULL;
    this->NewStation_FadeIn = NULL;
    this->NewStation_FadeOut = NULL;
    this->CurrentStation_Update = NULL;
    this->ContainerScaleBox = NULL;
}

void URadioNotificationWidget::OnScaleSettingChanged(float NewValue) {
}

void URadioNotificationWidget::OnRadioFadeAnimComplete() {
}

void URadioNotificationWidget::OnNewStationFadeAnimComplete() {
}


