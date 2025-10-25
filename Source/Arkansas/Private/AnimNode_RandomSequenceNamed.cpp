#include "AnimNode_RandomSequenceNamed.h"

FAnimNode_RandomSequenceNamed::FAnimNode_RandomSequenceNamed() {
    this->bShuffleMode = false;
    this->bRandomTimeOnInitialize = false;
    this->RandomTimePercentage = 0.00f;
    this->RandomTimeStart = 0.00f;
    this->PlayRate = 0.00f;
}

