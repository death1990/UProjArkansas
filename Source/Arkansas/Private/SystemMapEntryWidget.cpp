#include "SystemMapEntryWidget.h"

USystemMapEntryWidget::USystemMapEntryWidget() {
    this->InactiveBeaconOpacity = 0.50f;
    this->bShowButtonSelected = true;
    this->bShowPlayerIcon = false;
    this->bSetTextColorByTravelState = false;
    this->UnlockedColor = EIndianaUIColorType::IndianaYellow;
    this->LockedColor = EIndianaUIColorType::IndianaNotQuiteYellow;
    this->Button = NULL;
    this->NameTextBlock = NULL;
    this->PlayerIcon = NULL;
    this->QuestBeacon = NULL;
    this->BackgroundDisplayPanel = NULL;
    this->TextDisplayPanel = NULL;
}


