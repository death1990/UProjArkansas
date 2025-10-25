#include "ObservationGate.h"

FObservationGate::FObservationGate() {
    this->DifficultyRange = ESkillDifficultyRange::Cosmetic;
    this->DifficultyThreshold = 0;
    this->bIgnoreGateForInteraction = false;
}

