#include "AnimNotify_EventEffects.h"
#include "EventEffectState.h"

UAnimNotify_EventEffects::UAnimNotify_EventEffects() {
    this->EventEffects = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
}


