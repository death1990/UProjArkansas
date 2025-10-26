#include "WeatherSystem.h"
#include "Components\PostProcessComponent.h"

AWeatherSystem::AWeatherSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("WeatherSystemPostProcessComponent"));
    this->m_DefaultWeatherState = NULL;
    this->m_SkyLight = NULL;
    this->m_EclipseSkyLightBrightness = 0.00f;
    this->m_ExponentialHeightFog = NULL;
    this->m_PostProcessComponent = (UPostProcessComponent*)RootComponent;
    this->m_VolumetricCloudActor = NULL;
    this->m_MaterialParameterCollection = NULL;
    this->m_CloudMaterialParameterCollection = NULL;
    this->m_NiagaraParameterCollection = NULL;
    this->m_SkyAtmosphereActor = NULL;
    this->m_Wind = NULL;
    this->m_TwilightPct = 0.00f;
    this->m_AboveHorizonTwilightAngle = 0.35f;
    this->m_BelowHorizonTwilightAngle = 0.17f;
}

void AWeatherSystem::UnregisterTimeOfDayActor(ATimeOfDayActor* InTimeOfDayActor) {
}

void AWeatherSystem::RemoveWeatherState(const UWeatherStateBase* pWeatherState, float FadeOutTime) {
}

void AWeatherSystem::RegisterTimeOfDayActor(ATimeOfDayActor* InTimeOfDayActor) {
}

AWeatherSystem* AWeatherSystem::GetWeatherSystem(const UObject* WorldContextObject) {
    return NULL;
}

UVolumetricCloudComponent* AWeatherSystem::GetVolumetricCloudComponent() const {
    return NULL;
}

float AWeatherSystem::GetTwilightPct() const {
    return 0.0f;
}

USkyLightComponent* AWeatherSystem::GetSkylightComponent() const {
    return NULL;
}

UCurveFloat* AWeatherSystem::GetSkyDomeIntensityCurve() {
    return NULL;
}

UCurveLinearColor* AWeatherSystem::GetSkyDomeHorizonCurve() {
    return NULL;
}

USkyAtmosphereComponent* AWeatherSystem::GetSkyAtmosphereComponent() const {
    return NULL;
}

FVector AWeatherSystem::GetPreviousEvaluatedExposureSettings() const {
    return FVector{};
}

UMaterialParameterCollection* AWeatherSystem::GetMaterialParameterCollection() const {
    return NULL;
}

UCurveLinearColor* AWeatherSystem::GetFogInscatteringTintCurve() {
    return NULL;
}

UExponentialHeightFogComponent* AWeatherSystem::GetExponentialHeightFogComponent() const {
    return NULL;
}

UMaterialParameterCollection* AWeatherSystem::GetCloudMaterialParameterCollection() const {
    return NULL;
}

TArray<ACelestialBody*> AWeatherSystem::GetCelestialBodies() const {
    return TArray<ACelestialBody*>();
}

float AWeatherSystem::GetActiveSunAngle() const {
    return 0.0f;
}

TArray<ACelestialBody*> AWeatherSystem::GetActiveCelestialBodiesSorted() const {
    return TArray<ACelestialBody*>();
}

TArray<ACelestialBody*> AWeatherSystem::GetActiveCelestialBodies() const {
    return TArray<ACelestialBody*>();
}

UMaterialParameterCollection* AWeatherSystem::GeMaterialParameterCollection() const {
    return NULL;
}

void AWeatherSystem::EditorOnly_SetSequenceRenderTimeNormalized(int32 InDay, float InNormalizedTime) {
}

void AWeatherSystem::EditorOnly_SetSequenceRenderTime(int32 InDay, float InHours, float InMinutes) {
}

void AWeatherSystem::EditorOnly_SetEditorTickOption(TEnumAsByte<EWeatherSystemEditorTickOptions> eTickOption) {
}

void AWeatherSystem::ApplyWeatherState(const UWeatherStateBase* pWeatherState, float FadeInTime) {
}


