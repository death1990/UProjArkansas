#include "CineCombatCameraParams.h"

UCineCombatCameraParams::UCineCombatCameraParams() {
    this->Priority = 1;
    this->LevelSequence = NULL;
    this->bAttachToActor = false;
    this->bUseTimeDilationData = false;
    this->bAllowTimeDilationEdit = true;
}


