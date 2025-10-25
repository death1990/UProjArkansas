#include "AnimNode_LegIKDriver.h"

FAnimNode_LegIKDriver::FAnimNode_LegIKDriver() {
    this->PlantRollAmount = 0.00f;
    this->MaxPitchClamp = 0.00f;
    this->MinPitchClamp = 0.00f;
    this->LODToUseFloorNormal = 0;
    this->bDoHeightCompensation = false;
    this->HeightCompensationSlopeCurve = NULL;
    this->HeightCompensationChangeSpeed = 0.00f;
    this->SetTransformOnMiss = false;
    this->GroundRollMultiplier = 0.00f;
    this->HipMode = ELegIKHipMode::None;
    this->HipAdjustRange = 0.00f;
    this->HipTranslationSpeedRun = 0.00f;
    this->HipTranslationSpeedIdle = 0.00f;
    this->HipRotationSpeedRun = 0.00f;
    this->HipTranslationSpeed = 0.00f;
    this->HipRotationSpeed = 0.00f;
    this->HipRotationRange = 0.00f;
    this->HipTranslationXYBlendSpeed = 0.00f;
    this->HipBufferZ = 0.00f;
    this->HipBufferXY = 0.00f;
    this->HipBufferSoftRadius = 0.00f;
    this->bInvertBipedHipRotation = false;
    this->FootRayUp = 0.00f;
    this->FootRayDown = 0.00f;
    this->FootTranslationSpeed = 0.00f;
    this->FootTranslationSpeedRun = 0.00f;
    this->FootRotationSpeed = 0.00f;
    this->FootRotationSpeedRun = 0.00f;
    this->DistanceBeforeReset = 0.00f;
    this->MaxTickBeforeReset = 0.00f;
    this->bIgnoreNormalRays = false;
    this->bUseFootShuffle = false;
    this->FootShuffleDistance = 0.00f;
    this->FootShuffleDuration = 0.00f;
    this->FootShuffleMaxDistance = 0.00f;
    this->FootShuffleRelaxTime = 0.00f;
    this->FootShuffleComfort = 0.00f;
    this->FootShuffleWeightShiftScale = 0.00f;
    this->IKCollisionChannel = ECC_WorldStatic;
}

