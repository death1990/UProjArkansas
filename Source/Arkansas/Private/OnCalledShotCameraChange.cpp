#include "OnCalledShotCameraChange.h"

UOnCalledShotCameraChange::UOnCalledShotCameraChange() {
    this->CameraStepChange = ECalledShotCameraStep::Attacker;
}

void UOnCalledShotCameraChange::OnCameraStepEvent(AActor* CameraOwner, ECalledShotCameraStep CameraStep) {
}


