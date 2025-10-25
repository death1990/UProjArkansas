#include "MusicVolume.h"

AMusicVolume::AMusicVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConsideredDangerousArea = false;
    this->OutOfCombatMinIntensity = 0.00f;
    this->OutOfCombatMaxIntensity = 0.00f;
    this->InCombatMinIntensity = 0.00f;
    this->InCombatMaxIntensity = 0.00f;
    this->GlobalAudioActor = NULL;
    this->VolumePriority = 0;
    this->ActivationRadius = 18000.00f;
    this->bBoxActivation = true;
    this->DeactivateTime = 2.00f;
    this->ModifierDelayTime = 0.00f;
    this->InCombatEnterLerpTime = 0.00f;
    this->InCombatExitLerpTime = 0.00f;
    this->OutOfCombatEnterLerpTime = 0.00f;
    this->OutOfCombatExitLerpTime = 0.00f;
}


