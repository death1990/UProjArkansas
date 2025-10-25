#include "OWCrowdSettings.h"

UOWCrowdSettings::UOWCrowdSettings() {
    this->CrowdMaxSightRange = 3000.00f;
    this->CrowdRadiusToAvoid = 1000.00f;
    this->CrowdFieldOfViewDegrees = 80.00f;
    this->CrowdCombatDeescalation = 120.00f;
    this->MaxDetectionUpdatesPerFrame = 3;
}


