#include "AnimationProxyRuntime.h"

FAnimationProxyRuntime::FAnimationProxyRuntime() {
    this->OwningAnimInstance = NULL;
    this->AuthoredAnimationProxyBlendTime = 0.00f;
    this->AnimationProxyBlendTime = 0.00f;
    this->BodyIdle0End = NULL;
    this->BodyIdle1End = NULL;
    this->bBodyIdle0Active = false;
    this->bBodyIdle0TransitionToStart = false;
    this->bBodyIdle0TransitionToEnd = false;
    this->bBodyIdle1TransitionToStart = false;
    this->bBodyIdle1TransitionToEnd = false;
    this->bBodyIdle0SnapTransition = false;
    this->bBodyIdle1SnapTransition = false;
    this->bBodyIdle0ExitEnd = false;
    this->bBodyIdle1ExitEnd = false;
    this->bBodyIdle0ExitStart = false;
    this->bBodyIdle1ExitStart = false;
    this->bBodyIdleLooping = false;
    this->bFacialIdleToggle = false;
    this->bFacialAnimation_GoToTransition0 = false;
    this->bFacialAnimation_GoToLoop0 = false;
    this->bFacialAnimation_GoToTransition1 = false;
    this->bFacialAnimation_GoToLoop1 = false;
}

