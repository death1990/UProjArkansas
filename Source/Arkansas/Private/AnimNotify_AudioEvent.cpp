#include "AnimNotify_AudioEvent.h"

UAnimNotify_AudioEvent::UAnimNotify_AudioEvent() {
    this->LoopType = EAnimationAudioLoopType::None;
    this->bStop = false;
    this->AnimationAudio = NULL;
}


