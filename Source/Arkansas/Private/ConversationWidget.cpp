#include "ConversationWidget.h"

UConversationWidget::UConversationWidget() {
    this->SelectionInfoPanel = NULL;
    this->SpeakerFactionTextBlock = NULL;
    this->ConversationMessage = NULL;
    this->HistoryDisplay = NULL;
    this->DottedBGVerticalBox = NULL;
    this->CanvasOverlay = NULL;
    this->ConversationOverlay = NULL;
    this->SpeakerTextBlock = NULL;
    this->HistoryOverlay = NULL;
    this->ConversationSizeOverlay = NULL;
    this->ResponseOverlay = NULL;
    this->HistorySizeBox = NULL;
    this->DialogueSizeBox = NULL;
    this->ResponseSizeBox = NULL;
    this->BGPCSizeBox = NULL;
    this->DialogueBorder = NULL;
    this->DialogueBackgroundBlur = NULL;
    this->ResponsesBorder = NULL;
    this->SkillSpeechCheckNotification = NULL;
    this->NamePlateHorizontalBox = NULL;
    this->NotificationHorizontalBox = NULL;
    this->InlineNotification2 = NULL;
    this->InlineNotification3 = NULL;
    this->InlineNotification4 = NULL;
    this->InlineNotification5 = NULL;
    this->InlineNotification6 = NULL;
    this->InvisibleButton = NULL;
    this->ConversationCountdownWidget = NULL;
    this->HistoryButtonPanel = NULL;
    this->HistoryButton = NULL;
    this->ConversationDottedBGOffset = 0.00f;
    this->SkillSpeechNotificationShortUptime = 1.25f;
    this->SkillSpeechNotificationLongUptime = 5.00f;
    this->ConversationUIAlphaLerpTransitionTime = 1.00f;
    this->ConversationUIAlphaLerpInterpExponent = 2.00f;
    this->ResponsesLerpTransitionTime = 1.00f;
    this->ResponsesLerpInterpExponent = 2.00f;
    this->ResponsesAlphaTransitionTime = 1.00f;
    this->ResponsesAlphaInterpExponent = 2.00f;
    this->DialoguePanelLerpTransitionTime = 1.00f;
    this->DialoguePanelLerpInterpExponent = 2.00f;
    this->BackgroundWidthLerpTransitionTime = 1.00f;
    this->BackgroundWidthLerpInterpExponent = 2.00f;
    this->ConversationHistoryActiveBGWidth = 1920.00f;
    this->ConversationHistoryInactiveBGWidth = 1400.00f;
    this->ConversationBlackBGOffset = 0.00f;
    this->HistoryAlphaTransitionTime = 1.00f;
    this->HistoryAlphaInterpExponent = 2.00f;
    this->HistoryButtonAlphaTransitionTime = 1.00f;
    this->HistoryButtonAlphaInterpExponent = 2.00f;
    this->ConversationHistoryActivePadding = 300.00f;
    this->ConversationHistoryInactivePadding = 0.00f;
    this->FactionTextBlockDefaultOffset = 30.00f;
    this->FactionTextBlockReducedOffset = 10.00f;
    this->InitialDelay = 2.00f;
    this->RecentPlayerInputDelay = 2.25f;
    this->ObservationSuccessTexture = NULL;
    this->ObservationFailureTexture = NULL;
    this->bShowSidePanelForPrimaryText = false;
    this->CurrentSpeakerFaction = NULL;
}



bool UConversationWidget::ShouldHideShowUILabel() const {
    return false;
}

void UConversationWidget::SetObservationPanelCustomMessage(bool bDisplayGreen, const FLocString& Message) {
}


void UConversationWidget::OnHistoryToggleInputAction() {
}

void UConversationWidget::OnHistoryScroll(float InputDelta) {
}

void UConversationWidget::OnFactionReputationChanged(const UFactionData* FactionData, EReputationType ReputationType, int32 Amount, const UReputationData* ReputationBefore, const UReputationData* ReputationAfter) {
}

void UConversationWidget::OnConversationFadeOutComplete(UOwConversationInstance* Instance, EPresentationModeCameraFadeType FadeType) {
}

void UConversationWidget::OnConversationEnded(UOwConversationInstance* Instance) {
}



void UConversationWidget::BeginFadeOutSkillSpeechNotification() {
}


