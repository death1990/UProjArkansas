#include "MinimapWidget.h"

UMinimapWidget::UMinimapWidget() {
    this->ContentOverlay = NULL;
    this->LoadingImageBlocker = NULL;
    this->LoadingThrobber = NULL;
    this->OuterSizeBox = NULL;
    this->ContentCanvas = NULL;
    this->MapTypeSwitcher = NULL;
    this->MapChunkImage = NULL;
    this->VirtualMapImage = NULL;
    this->MapChunkScaleBox = NULL;
    this->PlayerMarker = NULL;
    this->PlayerOverlay = NULL;
    this->PlayerFOVCone = NULL;
    this->CombatBacking = NULL;
    this->TimeOfDayImage = NULL;
    this->RestrictedAreaBacking = NULL;
    this->TrespassingContainer = NULL;
    this->TrespassAnimIn = NULL;
    this->TrespassAnimOut = NULL;
    this->AccessGrantedAnimIn = NULL;
    this->AccessGrantedAnimOut = NULL;
    this->TrespassingDisplay = NULL;
    this->AccessGrantedDisplay = NULL;
    this->BodyFoundContainer = NULL;
    this->BodyFoundTextBlock = NULL;
    this->CompassPanel = NULL;
    this->PieceLeft1 = NULL;
    this->PieceLeft2 = NULL;
    this->PieceLeft3 = NULL;
    this->PieceLeft4 = NULL;
    this->PieceLeft5 = NULL;
    this->PieceLeft6 = NULL;
    this->PieceRight1 = NULL;
    this->PieceRight2 = NULL;
    this->PieceRight3 = NULL;
    this->PieceRight4 = NULL;
    this->PieceRight5 = NULL;
    this->PieceRight6 = NULL;
    this->MinimapClampedEntry1 = NULL;
    this->MinimapClampedEntry2 = NULL;
    this->MinimapClampedEntry3 = NULL;
    this->MinimapClampedEntry4 = NULL;
    this->MinimapClampedEntry5 = NULL;
    this->MinimapClampedEntry6 = NULL;
    this->MinimapClampedEntry7 = NULL;
    this->MinimapClampedEntry8 = NULL;
    this->MinimapClampedEntry9 = NULL;
    this->MinimapClampedEntry10 = NULL;
    this->MinimapClampedEntry11 = NULL;
    this->MinimapClampedEntry12 = NULL;
    this->MinimapClampedEntry13 = NULL;
    this->MinimapClampedEntry14 = NULL;
    this->MinimapClampedEntry15 = NULL;
    this->bDisableMapScale = false;
    this->bDisableMapRotation = false;
    this->bDisableMapTranslation = false;
    this->bUsingNewMapStyle = false;
    this->bSupportsVirtualTextures = false;
    this->bForceCombatColorOverride = false;
    this->CentimetersPerMapPixel = -1.00f;
    this->MaxPixelSize = 16384;
    this->MinimumVirtualMapSize = 1024.00f;
    this->bAssumeCenterPaddedTexture = true;
    this->MinimapDataAsset = NULL;
    this->ClampedMinimapBounds = 0.85f;
    this->SpotterCooldown = 30.00f;
    this->BodyFoundEventDisplayTime = 3.00f;
    this->NPCClass = NULL;
    this->NumPreCreatedNPCs = 50;
    this->QuestBeaconClass = NULL;
    this->NumPreCreatedBeacons = 7;
    this->POIBeaconClass = NULL;
    this->NumPreCreatedPOIs = 10;
    this->NumPreCreatedServicePOIs = 10;
    this->TrapTriggerClass = NULL;
    this->NumPreCreatedTrapTriggers = 20;
    this->LauncherEmitterClass = NULL;
    this->NumPreCreatedLauncherEmitters = 20;
    this->NpcClusterClass = NULL;
    this->NumPreCreatedNpcClusters = 20;
    this->bLogBatchIterators = false;
    this->bShowTimeOfDay = false;
    this->CustomWaypointClass = NULL;
    this->bAlwaysShowRegionLevelCustomWaypoints = true;
    this->DaytimeTexture = NULL;
    this->NighttimeTexture = NULL;
    this->AngleVariance = 5.00f;
    this->NumThreatIndicatorSections = 12;
    this->RestrictedAreaParameter = TEXT("RestrictedAreaCheck");
    this->CurrentMapImageTexture = NULL;
}

void UMinimapWidget::OnUnlockAbilityChanged(EUnlockAbility Ability) {
}

void UMinimapWidget::OnPostMapLoad(UWorld* World) {
}

void UMinimapWidget::OnMinimapThreatIndicatorSettingChanged(bool bShouldShowThreatIndicator) {
}

void UMinimapWidget::OnMinimapRotationSettingChanged(bool bIsMinimapRotationLockedIn) {
}

void UMinimapWidget::OnMinimapFOVConeSettingChanged(bool bShouldShowFOVCone) {
}

void UMinimapWidget::OnInteractableSelectionChanged(const FInteractionDescription& Description) const {
}

void UMinimapWidget::OnFoundBodyEventTimedOut() {
}


