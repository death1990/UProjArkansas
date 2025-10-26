#include "CelestialBody.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Components/DirectionalLightComponent.h"

ACelestialBody::ACelestialBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CelestialBodyStaticMesh"));
    this->m_StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->m_IsStatic = false;
    this->m_AzimuthCurve = NULL;
    this->m_AltitudeCurve = NULL;
    this->m_AzimuthStatic = 0.00f;
    this->m_AltitudeStatic = 0.00f;
    this->m_Distance = 400000.00f;
    this->m_MaxCelestialLightAngle = 0.52f;
    this->m_PolarAngle = 0.00f;
    this->m_UpdateRotation = false;
    this->m_DaysInCycle = 1;
    this->m_LightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("CelestialBodyLight"));
    this->m_LowerHemisphereBrightnessFactor = 0.10f;
    this->m_MaxLightBrightness = 100.00f;
    this->m_LightIntensityMultiplier = 1.00f;
    this->m_EnableShadows = true;
    this->m_IsSun = false;
    this->m_AffectsTwilight = false;
    this->m_AffectedByTwilight = false;
    this->m_UseMoonPhaseForLightIntensity = false;
}

void ACelestialBody::UpdateStaticState() {
}

bool ACelestialBody::IsSun() const {
    return false;
}

bool ACelestialBody::IsLightAngleClamped() const {
    return false;
}

float ACelestialBody::GetUnwoundAzimuthAngle() const {
    return 0.0f;
}

UStaticMeshComponent* ACelestialBody::GetStaticMeshComponent() const {
    return NULL;
}

float ACelestialBody::GetScaleInView() const {
    return 0.0f;
}

float ACelestialBody::GetRadialDistance() const {
    return 0.0f;
}

float ACelestialBody::GetMaxLightBrightness() const {
    return 0.0f;
}

FLinearColor ACelestialBody::GetLowerHemisphereColor() const {
    return FLinearColor{};
}

float ACelestialBody::GetLowerHemisphereBrightnessFactor() const {
    return 0.0f;
}

float ACelestialBody::GetLightIntensityPct() const {
    return 0.0f;
}

float ACelestialBody::GetLightIntensity() const {
    return 0.0f;
}

float ACelestialBody::GetLightIndirectIntensity() const {
    return 0.0f;
}

FVector ACelestialBody::GetLightDirection() const {
    return FVector{};
}

UDirectionalLightComponent* ACelestialBody::GetLightComponent() const {
    return NULL;
}

FLinearColor ACelestialBody::GetLightColor() const {
    return FLinearColor{};
}

int32 ACelestialBody::GetDaysInCycle() const {
    return 0;
}

FVector ACelestialBody::GetCelestialDirection() const {
    return FVector{};
}

float ACelestialBody::GetAzimuth() const {
    return 0.0f;
}

int32 ACelestialBody::GetAtmosphereSunLightIndex() const {
    return 0;
}

float ACelestialBody::GetAltitude() const {
    return 0.0f;
}


