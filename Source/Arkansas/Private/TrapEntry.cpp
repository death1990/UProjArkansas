#include "TrapEntry.h"

FTrapEntry::FTrapEntry() {
    this->Trap = NULL;
    this->Hazard = NULL;
    this->LauncherEmitter = NULL;
    this->TrapGroup = NULL;
    this->PreDelay = 0.00f;
    this->TrapDuration = 0.00f;
    this->bIsOnceOnly = false;
}

