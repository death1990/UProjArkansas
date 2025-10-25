#include "GenericNotificationEntryWidget.h"

UGenericNotificationEntryWidget::UGenericNotificationEntryWidget() {
    this->AnimationContainer = NULL;
    this->InputInstruction_0 = NULL;
    this->InputInstruction_1 = NULL;
    this->InputInstruction_2 = NULL;
    this->InputInstruction_3 = NULL;
    this->InputInstruction_4 = NULL;
    this->InlineNotification = NULL;
    this->NotificationTypeContainer = NULL;
    this->NotificationTypeImage = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->ItemTypeTexture = NULL;
    this->ExpTypeTexture = NULL;
    this->GenericTypeTexture = NULL;
}

void UGenericNotificationEntryWidget::OnStickLayoutChanged(int32 NewValue) {
}

void UGenericNotificationEntryWidget::OnFadeOutComplete() {
}

void UGenericNotificationEntryWidget::OnFadeInComplete() {
}


