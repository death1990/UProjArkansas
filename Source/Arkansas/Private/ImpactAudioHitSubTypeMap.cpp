#include "ImpactAudioHitSubTypeMap.h"

FImpactAudioHitSubTypeMap::FImpactAudioHitSubTypeMap() {
    this->KillShotNormal = NULL;
    this->KillShotWeakspot = NULL;
    this->KillShotCritical = NULL;
    this->KillShotCriticalWeakspot = NULL;
    this->NegatedNormal = NULL;
    this->NegatedWeakspot = NULL;
    this->WeakspotNormal = NULL;
    this->WeakspotCritical = NULL;
    this->Normal = NULL;
    this->NormalCritical = NULL;
    this->AlreadyDead = NULL;
}

