#include "CrowdAnimInstance.h"

UCrowdAnimInstance::UCrowdAnimInstance() {
    this->EyeStrength = 0.00f;
    this->HeadYaw = 0.00f;
    this->HeadPitch = 0.00f;
    this->HeadStrength = 0.00f;
    this->DefaultPersonality = NULL;
    this->CurrentPersonality = NULL;
    this->bSnapshotActive = false;
}


