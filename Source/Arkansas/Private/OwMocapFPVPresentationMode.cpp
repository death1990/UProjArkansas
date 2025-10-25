#include "OwMocapFPVPresentationMode.h"

UOwMocapFPVPresentationMode::UOwMocapFPVPresentationMode() {
    this->ListeningCameraShakeClass = NULL;
    this->ListeningCameraShakeScale = 1.00f;
    this->ListeningCameraShakeSpace = ECameraShakePlaySpace::World;
    this->ActiveListeningCameraShake = NULL;
}


