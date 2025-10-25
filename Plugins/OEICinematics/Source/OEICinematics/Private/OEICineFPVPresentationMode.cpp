#include "OEICineFPVPresentationMode.h"

UOEICineFPVPresentationMode::UOEICineFPVPresentationMode() {
    this->TransitionInTime = 0.20f;
    this->TransitionOutTime = 0.20f;
    this->TransitionExponent = 1.00f;
    this->MainSpeakerSingleTargetSettings = NULL;
    this->SecondarySpeakerSingleTargetSettings = NULL;
    this->SpeakerPairTargetSettings = NULL;
    this->ListenerPairTargetSettings = NULL;
    this->bCutWhenCrossingCenterline = false;
    this->DoubleSpeakerFramingThreshold = 40.00f;
    this->bEnableDoubleSpeakerFramingThreshold = false;
    this->ShotInterpolator = NULL;
    this->bMainSpeakerFramingMirroring = true;
    this->PreviousSpeaker = NULL;
    this->PreviousListener = NULL;
    this->PreviousSecondaryTarget = NULL;
    this->CameraModifierClass = NULL;
    this->CameraShakeClass = NULL;
    this->CameraShakeStrength = 1.00f;
    this->ActiveCameraShake = NULL;
}


