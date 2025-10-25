#include "ReticleWidget.h"

UReticleWidget::UReticleWidget() {
    this->MinLockOnThreshold = 0.15f;
    this->RotationSpeed = 1.00f;
    this->StealthTime = 1.00f;
    this->InteractCountThreshold = 2;
    this->HeatParamName = TEXT("HeatPercentage");
    this->bShowHeatBarAtZero = false;
    this->ChargeActiveParamName = TEXT("Active");
    this->ChargeProgressParamName = TEXT("CurrentSections");
    this->ChargeFlashParamName = TEXT("Flash");
    this->MaxChargesParamName = TEXT("MaxSections");
    this->FlashDuration = 0.00f;
    this->bShowChargeBarAtZero = true;
    this->ReticleSizeRTPC = NULL;
    this->OnLockonActiveAudioEvent = NULL;
    this->OnLockonDetectedAudioEvent = NULL;
    this->OnLockonDetectedStopAudioEvent = NULL;
    this->OnLockonLockedAudioEvent = NULL;
    this->OnLockonAcquiredAudioEvent = NULL;
    this->OnLockonLostAudioEvent = NULL;
    this->RootCanvas = NULL;
    this->ReticuleInteract = NULL;
    this->ReticleLockOn = NULL;
    this->Crosshair = NULL;
    this->TTDRotators = NULL;
    this->TTDOverlay = NULL;
    this->TTDDTOverlay = NULL;
    this->TTDFill = NULL;
    this->CauseDamageWidget = NULL;
    this->DTImageOverlay = NULL;
    this->DTImage = NULL;
    this->DTTextBlock = NULL;
    this->NPCAwarenessTextBlock = NULL;
    this->StealthOverlay = NULL;
    this->HeatBar = NULL;
    this->ChargingBar = NULL;
    this->BleedIcon = NULL;
    this->StunIcon = NULL;
    this->KnockDownIcon = NULL;
    this->AnalyzerIntro = NULL;
    this->ReticleLockOnPercentageName = TEXT("TargetLockPercentage");
    this->EnergyBarPercentName = TEXT("Energy Percentage");
    this->EnergyBarSegmentsName = TEXT("Number of Segments");
    this->CachedHeatBarMaterial = NULL;
    this->CachedChargeBarMaterial = NULL;
}

void UReticleWidget::OnWeaponEquipped(UEquipmentComponent* EquipmentComp, UWeapon* EquippedWeapon) {
}

void UReticleWidget::OnWeaponAttack(UWeapon* Weapon) {
}

void UReticleWidget::OnTTDTargetLost() {
}

void UReticleWidget::OnTTDTargetAcquired() {
}

void UReticleWidget::OnTTDReticleMeterModeChanged(int32 bVisible) {
}

void UReticleWidget::OnTTDMeterVisibilityChanged(int32 VisibilityIn) {
}

void UReticleWidget::OnTTDMeterChanged(float PrevValue, float CurrValue) {
}

void UReticleWidget::OnTargetAnalyzerChanged(EBodyPartRegion BodyPartRegion, const AActor* TargetedActor) {
}

void UReticleWidget::OnShoulderChanged(bool bShoulderSwappedIn) {
}

void UReticleWidget::OnScopedStateChanged(URangedMode* RangedMode, bool bIsFullyFineAimed) {
}

void UReticleWidget::OnReticleVisibilityChanged(int32 VisibilityIn) {
}

void UReticleWidget::OnReticleModeChanged(int32 ModeIn) {
}

void UReticleWidget::OnPerspectiveChanged(int32 PerspectiveIn) {
}

void UReticleWidget::OnLockOnTargetChanged() {
}

void UReticleWidget::OnLockOnProgressChanged(float Progress) {
}

void UReticleWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UReticleWidget::OnFineAimAutoAimEnableChanged(bool bEnabled) {
}

void UReticleWidget::OnDetectionlevelChanged(EDetectionLevel OldLevel, EDetectionLevel NewLevel) {
}

void UReticleWidget::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bCombatIn, bool bRestoring) {
}






