#include "AimAssistConfig.h"

FAimAssistConfig::FAimAssistConfig() {
    this->TargetLockHorizontalRate = 0.00f;
    this->TargetLockStrength = 0.00f;
    this->TargetLockNoTouchDuration = 0.00f;
    this->TargetLockNoTouchFadeTime = 0.00f;
    this->TrackQuickTargetInputThreshold = 0.00f;
    this->TrackQuickTargetIdleTime = 0.00f;
    this->TrackQuickTargetDuration = 0.00f;
    this->TrackQuickTargetMinVelocity = 0.00f;
    this->TrackQuickTargetHorizontalRate = 0.00f;
    this->TrackQuickTargetVerticalRate = 0.00f;
}

