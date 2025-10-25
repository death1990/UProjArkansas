#include "CompanionsWidget.h"

UCompanionsWidget::UCompanionsWidget() {
    this->NavigationBar = NULL;
    this->InputLabelWidget = NULL;
    this->FlavorTextWidget = NULL;
    this->CompanionInfoWidget = NULL;
    this->CompanionEquipmentBarWidget = NULL;
    this->CompanionStatsSummaryWidget = NULL;
    this->CompanionPerkListWidget = NULL;
    this->DetailPanelSwitcher = NULL;
    this->CompanionDetails = NULL;
    this->CompanionDetailsContainer = NULL;
    this->CompanionDescriptionPanel = NULL;
    this->CompanionDescriptionContainer = NULL;
    this->CompanionTooltip = NULL;
    this->bFillEmptyNames = true;
    this->bShowBackPrompt = true;
    this->bFocusEquipmentByDefault = true;
    this->bIsLedger = true;
    this->bTestAsShip = false;
}

void UCompanionsWidget::ShowDetailPanel(bool bDisplayPanel) {
}

void UCompanionsWidget::OnPerksAllocated() {
}

void UCompanionsWidget::HandleOnStatusEffectItemHoveredFocused(const UStatusEffectEntryWidget* StatusEffectItemIn) {
}

void UCompanionsWidget::HandleOnStatItemHoveredFocused(UGenericListEntryWidget* StatItemIn) {
}

void UCompanionsWidget::HandleOnPerkItemHoveredFocused(UPerksListEntry* PerkItemIn) {
}

void UCompanionsWidget::HandleOnEquipmentButtonUnhighlighted(UItemViewerButtonWidget* HighlightedEquipmentItem) {
}

void UCompanionsWidget::HandleOnEquipmentButtonHighlighted(UItemViewerButtonWidget* HighlightedEquipmentItem) {
}

void UCompanionsWidget::HandleOnEquipmentButtonAuxClicked(UItemViewerButtonWidget* HighlightedEquipmentItem) {
}

void UCompanionsWidget::HandleOnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID) {
}

void UCompanionsWidget::HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering) {
}

void UCompanionsWidget::HandleOnCompanionInfoHighlighted(UCompanionInfoButton* CompanionInfoIn) {
}

void UCompanionsWidget::DisplayCompanionInfo(ECompanionInfoType TargetCompanionType) {
}


