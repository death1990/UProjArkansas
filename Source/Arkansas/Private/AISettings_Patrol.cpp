#include "AISettings_Patrol.h"

UAISettings_Patrol::UAISettings_Patrol() {
    this->PatrolNode = NULL;
    this->PatrolType = EPatrolType::OneShot;
    this->bTeleport = false;
    this->ForceAllowedNavigationActionsMask = 0;
    this->ForceDisallowedNavigationActionsMask = 0;
    this->NavigationFlags = 0;
}


