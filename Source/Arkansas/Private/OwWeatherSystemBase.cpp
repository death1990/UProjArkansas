#include "OwWeatherSystemBase.h"

AOwWeatherSystemBase::AOwWeatherSystemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugNativization = false;
    this->CloudCombinedDensityRT = NULL;
    this->CloudEdgeMapRT = NULL;
    this->SkyDomeGradientRT = NULL;
    this->FogInscatteringLatLongRT = NULL;
    this->CelestialLightingLatLongRT = NULL;
    this->CelestialLightingCloudsLatLongRT = NULL;
    this->SunTwilightAndMoonLatLongAdditiveRT = NULL;
    this->SkyCloudOcclusionLatLongRT = NULL;
    this->SkyCloudOcclusionAccumulateLatLongRT = NULL;
    this->SkyCloudOcclusionIncrementLatLong = NULL;
    this->CloudFakeLightingSliceAdditiveRT = NULL;
    this->CloudFakeLightShadowsRTA = NULL;
    this->WriteCombinedDensitiesToTargetMat = NULL;
    this->WriteCloudEdgesToTargetMat = NULL;
    this->WriteSkyDomeGradientsMat = NULL;
    this->WriteTwilightToSunMat = NULL;
    this->FinalColorSkyCloudContributionMat = NULL;
    this->TransferAdditiveLightingLatLongMat = NULL;
    this->WriteCelestialLightingCloudsLatLongMat = NULL;
    this->WriteMoonsToTargetLatLongMat = NULL;
    this->WriteFinalColorSkyCloudOcclusion = NULL;
    this->TransferAdditiveSkyOcclusionToIntermediateLatLongMat = NULL;
    this->WriteSkyCloudOcclusionIncrementMat = NULL;
    this->AccumulateSkyCloudOcclusionToTargetLatLongMat = NULL;
    this->MasterWriteCloudFakeLightingToTargetArraySliceMat = NULL;
    this->WriteVolumeSkyOccToTargetArraySliceMat = NULL;
    this->TransferCloudFakeLightingFromAdditiveMat = NULL;
    this->NumCloudLightingRenderSteps = 2;
    this->NumCloudSkyOccRenderSteps = 8;
    this->NumFogSkyOccRenderSteps = 16;
    this->MacroTextureTilingDistance = 2500000.00f;
    this->FogSkyOcclusionRenderIndex = 1;
    this->m_bUsePlayerPositionForExponentialHeightFogOffset = true;
    this->m_SunVisibilityDiskAngle = 10.00f;
    this->m_SunVisibilitySmoothing = 0.95f;
    this->m_Starfield = NULL;
}

void AOwWeatherSystemBase::WarmupSky(bool bSupportTwilightFakeLighting) {
}

void AOwWeatherSystemBase::UpdateWindOffset(float WindSpeed, float CloudWindSpeed, float WindIncrement) {
}

void AOwWeatherSystemBase::UpdateSunSpecularScale(float SunSpecularScale) {
}

void AOwWeatherSystemBase::UpdateShadowDistanceBySunAngle(float CloudShadowTraceDistance, float CloudShadowTraceDistanceTwilight) {
}

void AOwWeatherSystemBase::UpdateCommonMaterialParams(float TwilightSunInClouds, float TwilightSunInFog, float StarBrightnessDay, float StarBrightnessNight) {
}

void AOwWeatherSystemBase::UpdateAdditiveSkyDome(float SkyDomeIntensityNight, float SkyDomeIntensityDay, float SkyDomeIntensityEclipse, float SkyDomeIntensityTwilight, FLinearColor SkyDomeColorHorizonTwilight, FLinearColor SkyDomeColorHorizonDay, FLinearColor SkyDomeColorHorizonEclipse) {
}

void AOwWeatherSystemBase::ResizeDistanceSunRaysMesh(bool bSunRays, AStaticMeshActor* DistantSunRaysMesh, float SunRaysDistanceDayTime, float SunRaysDistanceTwilight) {
}

void AOwWeatherSystemBase::RenderLatLongTargetsFogSky() {
}


void AOwWeatherSystemBase::MoonSwapLogic(FName MoonTransitionParameter) {
}

ACelestialBody* AOwWeatherSystemBase::GetSunCelestialBody() const {
    return NULL;
}

ACelestialBody* AOwWeatherSystemBase::GetPrimarySunCelestialBody() const {
    return NULL;
}

float AOwWeatherSystemBase::GetLightOcclusionPct() const {
    return 0.0f;
}

float AOwWeatherSystemBase::GetLightOcclusionInfluence() const {
    return 0.0f;
}

float AOwWeatherSystemBase::GetInSpacePct() const {
    return 0.0f;
}

void AOwWeatherSystemBase::DrawTiny2DRenderTargets() {
}

void AOwWeatherSystemBase::DrawIncrementedRenderTargets(bool bSupportTwilightFakeLighting) {
}

void AOwWeatherSystemBase::CPPInitialSetupSteps() {
}


