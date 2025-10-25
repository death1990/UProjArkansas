#include "TickRateSkipHandler.h"

FTickRateSkipHandler::FTickRateSkipHandler() {
    this->CycleCountToRun = 0;
    this->InitialCycleCount = 0;
    this->bUseDifferentCountInCombat = false;
    this->CombatCycleCountToRun = 0;
}

