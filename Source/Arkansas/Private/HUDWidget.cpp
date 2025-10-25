#include "HUDWidget.h"

UHUDWidget::UHUDWidget() {
    this->SafeSpaceCanvasPanel = NULL;
    this->HudContents = NULL;
    this->Reticle = NULL;
    this->PlayerStatsDisplay = NULL;
    this->CompanionOverview_0 = NULL;
    this->CompanionOverview_1 = NULL;
    this->EnemyScanner = NULL;
    this->QuestLog = NULL;
    this->GenericLog = NULL;
    this->WeaponSelect = NULL;
    this->InteractionPrompt = NULL;
    this->AmmoReadout = NULL;
    this->LevelUpNotification = NULL;
    this->POIPrompt = NULL;
    this->ItemContainerWidget = NULL;
    this->HudStaticTooltip = NULL;
    this->ComparisonTooltip = NULL;
    this->GrenadeIndicatorWidget = NULL;
    this->DamageIndicatorWidget = NULL;
    this->ObservationGuide = NULL;
    this->MinimapWidget = NULL;
    this->AwarenessIndicatorMasterWidget = NULL;
    this->FactionPromptWidget = NULL;
    this->RadioNotificationWidget = NULL;
    this->AudioLogWidget = NULL;
    this->AudioRadioSwitcher = NULL;
    this->FlawDisplayDelay = 5.00f;
    this->LevelUpDisplayDelay = 2.00f;
    this->bShowMapTransitionNotifications = true;
    this->Flaw = NULL;
}

void UHUDWidget::QueueLevelUpNotification(UCharacterInfoComponent* InCharacterInfoComponent, int32 NewLevel) {
}

void UHUDWidget::OnRadioNotifStateChanged() {
}

void UHUDWidget::OnHUDWidthSafeZoneChanged(float Value) {
}

void UHUDWidget::OnHUDSafeZoneChanged(float Value) {
}

void UHUDWidget::OnHUDHeightSafeZoneChanged(float Value) {
}

void UHUDWidget::OnConversationFadeToBlackStarted(UOwConversationInstance* ConversationInstance, EPresentationModeCameraFadeType FadeType) {
}

void UHUDWidget::OnConversationEnded(UOwConversationInstance* ConversationInstance) {
}


