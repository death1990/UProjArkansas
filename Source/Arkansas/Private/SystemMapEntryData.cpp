#include "SystemMapEntryData.h"

FSystemMapEntryData::FSystemMapEntryData() {
    this->TargetDestinationAngle = 0.00f;
    this->TextJustification = ETextJustify::Left;
    this->TextZOrder = 0;
    this->ButtonZOrder = 0;
    this->QuestIconZOrder = 0;
    this->PlayerIconZOrder = 0;
    this->bDisplayPointOfNoReturnWarning = false;
    this->bShowWhileHidden = false;
    this->bFlipHorizontal = false;
}

