#include "BeaconTagWidget.h"

UBeaconTagWidget::UBeaconTagWidget() {
    this->DefaultBeaconTexture = NULL;
    this->bCullOptionalString = false;
    this->OffScreenScaleFactor = 0.60f;
    this->SkipCycle = 2;
    this->MainPanel = NULL;
    this->RootBox = NULL;
    this->DistanceTextBlock = NULL;
    this->NameTextBlock = NULL;
    this->OptionalTextBlock = NULL;
    this->BeaconIcon = NULL;
    this->Pulse = NULL;
}

void UBeaconTagWidget::OnWaypointMarkerVisibilityChanged(bool bVisible) {
}

void UBeaconTagWidget::OnHUDVisibilityChanged(bool bVisible) {
}


