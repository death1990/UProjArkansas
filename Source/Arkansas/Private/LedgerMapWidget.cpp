#include "LedgerMapWidget.h"

ULedgerMapWidget::ULedgerMapWidget() {
    this->SelectionWidgetClass = NULL;
    this->FastTravelEntryClass = NULL;
    this->PlayerEntryClass = NULL;
    this->BeaconEntryClass = NULL;
    this->AreaBeaconEntryClass = NULL;
    this->TextEntryClass = NULL;
    this->POIClass = NULL;
    this->CustomWaypointClass = NULL;
    this->bShowCompanionImageForCompanionQuests = false;
    this->MapEntryEdgeThreshold = 50.00f;
    this->bAllowPreviousFloorKeybindOnKeyboard = false;
    this->bCanCenterMapOnPlayerFromAnyFloor = false;
    this->bSupportsVirtualTextures = false;
    this->CentimetersPerMapPixel = -1.00f;
    this->MaxPixelSize = 16384;
    this->MinimumVirtualMapSize = 1024.00f;
    this->bAssumeCenterPaddedTexture = true;
    this->bEvaluateUVsImmediately = true;
    this->bHideTravelBeaconsOnRegionMapForCurrentMap = true;
    this->bShowBeaconsOnFloors = true;
    this->bShowBeaconsOnCurrentFloor = true;
    this->AreaBeaconGamepadReduction = 0.00f;
    this->MaxGamepadPanScale = 3.00f;
    this->NavigationBar = NULL;
    this->RegionNameTextblock = NULL;
    this->LocalMapNameTextBlock = NULL;
    this->MissingMapDataTextBlock = NULL;
    this->MapBorder = NULL;
    this->FlavorTextWidget = NULL;
    this->FloorLevelIndicator = NULL;
    this->VirtualMapImage = NULL;
    this->ScaleTextBlock = NULL;
    this->ScaleLockDisplay = NULL;
    this->InvisibleButton = NULL;
    this->MapInputLabelGroup = NULL;
}

FEventReply ULedgerMapWidget::OnMapImageMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void ULedgerMapWidget::OnCompanionSelectionClosed() {
}

FEventReply ULedgerMapWidget::OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void ULedgerMapWidget::InitiateFastTravelFromCompanionSelect() {
}


