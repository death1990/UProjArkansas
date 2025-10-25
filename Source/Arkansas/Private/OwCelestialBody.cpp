#include "OwCelestialBody.h"

AOwCelestialBody::AOwCelestialBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CanBeOccluded = false;
    this->m_OccludedLightMaxBrightness = 0.00f;
    this->m_LightShaftOcclusionMaskDarkness = 0.50f;
    this->m_LightShaftBloomScale = 0.10f;
}


FLinearColor AOwCelestialBody::GetAbsoluteLightColor() const {
    return FLinearColor{};
}


