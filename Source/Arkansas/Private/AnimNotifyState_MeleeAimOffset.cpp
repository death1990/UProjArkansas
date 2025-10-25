#include "AnimNotifyState_MeleeAimOffset.h"

UAnimNotifyState_MeleeAimOffset::UAnimNotifyState_MeleeAimOffset() {
    this->MinAimPitchOverride = -20.00f;
    this->MaxAimPitchOverride = 20.00f;
    this->MinAimYawOverride = 0.00f;
    this->MaxAimYawOverride = 0.00f;
    this->BoneToRotate = TEXT("spine1_JNT");
}


