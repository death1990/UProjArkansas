#include "MinimapValuesDataAsset.h"

UMinimapValuesDataAsset::UMinimapValuesDataAsset() {
    this->VisibleMinimapRadiusAroundPlayer = 3250.00f;
    this->MinimapRadiusPadding = 1000.00f;
    this->MinimapThreatdetectionRadiusPadding = 2500.00f;
    this->TimeBetweenOffMapEntryDistanceEvaluations = 0.30f;
    this->LowHealthThreshold = 0.30f;
    this->InCombatColor = EIndianaUIColorType::Invalid;
    this->InDisallowedRestrictedAreaColor = EIndianaUIColorType::Invalid;
    this->InAllowedRestrictedAreaColor = EIndianaUIColorType::Invalid;
    this->ZAxisMaxThreshold = 1000.00f;
    this->ZAxisThreshold = 1000.00f;
    this->ZAxisExceededOpacity = 0.60f;
    this->HostileClusterRadius = 1000.00f;
    this->ClusterGrowSpeedSeconds = 3.00f;
    this->ClusterShrinkSpeedSeconds = 0.25f;
    this->BountyTextureNPC = NULL;
}


