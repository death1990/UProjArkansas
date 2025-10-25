#include "AnimNode_RandomDataListPlayer.h"

FAnimNode_RandomDataListPlayer::FAnimNode_RandomDataListPlayer() {
    this->bRandomTimeOnInitialize = false;
    this->RandomTimePercentage = 0.00f;
    this->RandomTimeStart = 0.00f;
    this->bShuffleMode = false;
    this->bResetTimeBetweenPlaysToZero = false;
    this->PlayRate = 0.00f;
}

