#include "AISetting_MeleeAction.h"

UAISetting_MeleeAction::UAISetting_MeleeAction() {
    this->MeleeAction = EAIMeleeAction::None;
    this->PreferredAttackDistance = 80.00f;
    this->bUseAdaptiveRootMotion = true;
    this->AdaptiveRootMotionStopDistance = 50.00f;
    this->bIgnoreCollisionDuringApproach = false;
    this->bBumpDuringApproach = false;
    this->bSprintDuringApproach = false;
    this->bOverrideNumMeleeSlotsRequired = false;
    this->NumMeleeSlotsRequired = 1;
    this->AttackingRotationThreshold = -1.00f;
}


