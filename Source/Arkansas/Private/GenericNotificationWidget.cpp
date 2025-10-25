#include "GenericNotificationWidget.h"

UGenericNotificationWidget::UGenericNotificationWidget() {
    this->MainBorder = NULL;
    this->EntryWidget = NULL;
    this->ContentSizeBox = NULL;
    this->ContainerScaleBox = NULL;
    this->ContentContainer = NULL;
    this->RaritySwitcher = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->RarityFade = NULL;
    this->ContentResizeInterpExponent = 2.00f;
    this->AnimationDuration = 1.00f;
    this->ContentVerticalPadding = 15.00f;
    this->GenericLogBackingMaterialSize = 127;
    this->bAllowTickWhilePaused = true;
    this->bHideNotificationIfPaused = false;
    this->RestoreHiddenTime = 0.50f;
    this->bPauseForFullScreenTutorial = true;
}

void UGenericNotificationWidget::OnScaleSettingChanged(float NewValue) {
}

void UGenericNotificationWidget::OnSaveGameComplete(ESaveGameResult SaveResult, ESaveGameType SaveGameType) {
}

void UGenericNotificationWidget::OnNotificationDurationChanged(int32 NotificationDurationIn) {
}

void UGenericNotificationWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UGenericNotificationWidget::OnFadeOutComplete() {
}

void UGenericNotificationWidget::OnFadeInComplete() {
}


