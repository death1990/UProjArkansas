#include "NavigationCost.h"

FNavigationCost::FNavigationCost() {
    this->TraveledDistanceMultiplier = 0.00f;
    this->AdditionalDistanceCost = 0.00f;
    this->OutOfCombatAdditionalDistanceCostMultiplierOverride = 0.00f;
    this->bUseOutOfCombatAdditionalDistanceCostMultiplierOverride = false;
}

