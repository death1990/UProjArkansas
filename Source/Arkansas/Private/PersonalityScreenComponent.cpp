#include "PersonalityScreenComponent.h"

UPersonalityScreenComponent::UPersonalityScreenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivatePrimitiveDataIndex = 0;
    this->StaticNoisePrimitiveDataIndex = 1;
    this->ScreenModePrimitiveDataIndex = 2;
    this->ScreenGlowPrimitiveDataIndex = 3;
    this->LumenScreenGlowStrengthPrimitiveDataIndex = 4;
    this->FlickerRandomOffsetPrimitiveDataIndex = 5;
    this->UVOffsetPrimitiveDataIndex = 6;
    this->StaticNoise = 0.10f;
    this->ScreenGlowStrength = 12.00f;
    this->LumenScreenGlowStrength = 12.00f;
    this->MonitorOnEvent = NULL;
    this->MonitorOffEvent = NULL;
    this->PersonalityChangeEvent = NULL;
    this->ScreenActivationInterpSpeed = 5.30f;
    this->UVOffsetInterpStiffness = 200.00f;
    this->UVOffsetInterpCriticalDamping = 0.25f;
    this->bExcludeFromGlobalChanges = false;
    this->CurrentPersonalityType = EScreenPersonalityType::Generic;
    this->bScreenEnabled = false;
}

void UPersonalityScreenComponent::SetPersonalityState(EScreenPersonalityType InPersonalityType, bool bInScreenEnabled) {
}

bool UPersonalityScreenComponent::IsEnabled() const {
    return false;
}


