#include "OwAnimProxySettings.h"

UOwAnimProxySettings::UOwAnimProxySettings() {
    this->IntersectionThresholdForIgnoringActors = 5.00f;
    this->MaxBehaviorActivationDelay = 3.00f;
    this->PartialPathRetryDelay = 5.00f;
    this->MaxAllowedDistanceFromProxy = 100.00f;
    this->MaxStuckInPathingDuration = 15.00f;
    this->PlayerProximityDistance = 100.00f;
    this->NavProjectionRadius = 200.00f;
    this->OffNavTeleportDelay = 3.00f;
}


