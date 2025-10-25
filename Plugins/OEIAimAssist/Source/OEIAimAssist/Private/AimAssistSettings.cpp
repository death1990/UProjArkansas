#include "AimAssistSettings.h"

UAimAssistSettings::UAimAssistSettings() {
    this->DefaultTraceChannel = ECC_WorldStatic;
    this->DefaultTraceLength = 100000.00f;
    this->AimAssistEndTimeDelay = 0.10f;
    this->FrictionPercent = 0.40f;
    this->FrictionStartTime = 0.50f;
    this->FrictionEndTime = 0.20f;
    this->AdhesionRadius = 0.05f;
    this->AdhesionStartTime = 1.00f;
    this->AdhesionEndTime = 0.20f;
    this->MaxAdhesionPullPitch = 90.00f;
    this->MaxAdhesionPullYaw = 90.00f;
    this->MaxAdhesionDistance = 10000.00f;
}

UAimAssistSettings* UAimAssistSettings::Get() {
    return NULL;
}


