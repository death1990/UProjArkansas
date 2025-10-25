#include "WodemInstanceSettings.h"

FWodemInstanceSettings::FWodemInstanceSettings() {
    this->Mobility = EComponentMobility::Static;
    this->CastShadow = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = false;
    this->bCastStaticShadow = false;
    this->bCastContactShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->OverriddenLightMapRes = 0;
    this->LightmapType = ELightmapType::Default;
    this->bUseAsOccluder = false;
    this->bVisibleInRayTracing = false;
    this->bEvaluateWorldPositionOffset = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
}

