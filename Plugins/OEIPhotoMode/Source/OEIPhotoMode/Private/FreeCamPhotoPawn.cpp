#include "FreeCamPhotoPawn.h"

AFreeCamPhotoPawn::AFreeCamPhotoPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationYaw = true;
    this->bUseControllerRotationRoll = true;
    this->bAddDefaultMovementBindings = false;
    this->SpeedIncreaseRate = 0.20f;
    this->MaxSpeedMultiplier = 8.00f;
    this->MinSpeedMultiplier = 0.60f;
    this->TetherDistance = 4000.00f;
}


