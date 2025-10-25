#include "LedgerRadioWidget.h"

ULedgerRadioWidget::ULedgerRadioWidget() {
    this->RadioEntryClass = NULL;
    this->bActivateWirelessOnStationSelect = true;
    this->bDeactivateWirelessOnActiveStationExit = true;
    this->bShowFactionLogoOnHover = true;
    this->AnimatingMaterialActiveParam = TEXT("IsActive");
    this->StationNameTextBlock = NULL;
    this->StationDescTextBlock = NULL;
    this->InvisibleButton = NULL;
    this->InputLabelGroup = NULL;
    this->RadioListScrollBox = NULL;
    this->AvailablePanel = NULL;
    this->CurrentStationDisplay = NULL;
    this->FactionLogo = NULL;
    this->Enabled = NULL;
    this->Disabled = NULL;
    this->FrameRadialSwitcher = NULL;
    this->CachedRadioEntry = NULL;
}

void ULedgerRadioWidget::UpdateRadioStations() {
}

void ULedgerRadioWidget::ExitStationRange(const UBroadcastStationAsset* DiscoveredStation) {
}

void ULedgerRadioWidget::EnterStationRange(const UBroadcastStationAsset* DiscoveredStation) {
}

void ULedgerRadioWidget::AddDiscoveredRadioStation(const UBroadcastStationAsset* DiscoveredStation) {
}


