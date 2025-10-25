#include "FootstepAudio.h"
#include "EventEffectState.h"

UFootstepAudio::UFootstepAudio() {
    this->FootstepEvent = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
    this->RagdollImpactEvent = NULL;
    this->RagdollImpactThreshold = 2000.00f;
    this->RagdollImpactCooldown = 0.10f;
    this->RagdollTimeout = 3.00f;
}


