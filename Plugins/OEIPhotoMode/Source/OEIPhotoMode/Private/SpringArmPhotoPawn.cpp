#include "SpringArmPhotoPawn.h"

ASpringArmPhotoPawn::ASpringArmPhotoPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationYaw = true;
    this->bUseControllerRotationRoll = true;
    this->bAddDefaultMovementBindings = false;
    this->BoomNearSpeed = 100.00f;
    this->BoomFarSpeed = 3000.00f;
    this->BoomMaxLength = 8000.00f;
    this->StartingBoomLength = 400.00f;
    this->bAutoMinBoomLength = true;
    this->BoomMinLength = 0.00f;
    this->BoomPanSpeed = 150.00f;
    this->MaxVerticalOffset = 800.00f;
    this->BoomAdjustAccumulatorIn = 0.00f;
    this->BoomAdjustAccumulatorOut = 0.00f;
}

void ASpringArmPhotoPawn::SetBoomAdjustOut(float Val) {
}

void ASpringArmPhotoPawn::SetBoomAdjustIn(float Val) {
}


