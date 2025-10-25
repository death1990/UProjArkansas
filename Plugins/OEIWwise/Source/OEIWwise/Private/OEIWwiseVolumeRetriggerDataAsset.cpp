#include "OEIWwiseVolumeRetriggerDataAsset.h"

UOEIWwiseVolumeRetriggerDataAsset::UOEIWwiseVolumeRetriggerDataAsset() {
    this->AkAudioEvents.AddDefaulted(1);
    this->FailureBehaviourFlags = 0;
    this->ClosestPointHandling = EOEIClosestPointHandling::RandomPointInIntersection;
    this->MinTimeBetween = 2.00f;
    this->MaxTimeBetween = 5.00f;
    this->AttenuationScaling = 1.00f;
    this->TriggerProbability = 100.00f;
    this->SpawnDistanceFromPlayer = 500.00f;
    this->MinDistanceFromListener = 0.00f;
    this->MaxDistanceFromListener = 1000.00f;
}


