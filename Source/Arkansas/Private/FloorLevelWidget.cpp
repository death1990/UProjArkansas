#include "FloorLevelWidget.h"

UFloorLevelWidget::UFloorLevelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FloorImage = NULL;
    this->CurrentFloorImage = NULL;
    this->QuestPresenceIndicator = NULL;
    this->PlayerLocationDisplay = NULL;
}


