#include "SlotInfo.h"

FSlotInfo::FSlotInfo() {
    this->StartStatus = EEntryLocationStatus::Clear;
    this->ExitStatus = EEntryLocationStatus::Clear;
    this->SlotIndex = 0;
    this->bIsOnNavigation = false;
}

