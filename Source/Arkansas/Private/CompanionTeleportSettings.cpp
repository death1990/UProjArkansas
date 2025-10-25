#include "CompanionTeleportSettings.h"

FCompanionTeleportSettings::FCompanionTeleportSettings() {
    this->InvalidPathTeleportTime = 0.00f;
    this->MaxPathDistanceThreshold = 0.00f;
    this->MaxLinearDistanceThreshold = 0.00f;
    this->MinLinearDistanceToAllowTeleport = 0.00f;
    this->MinLinearDistanceToIgnorePlayerFacingCurrentLocation = 0.00f;
    this->MinLinearDistanceToIgnorePlayerFacingTeleportLocation = 0.00f;
    this->MaxDistanceBetweenEQSLocationAndPlayerPosition = 0.00f;
}

