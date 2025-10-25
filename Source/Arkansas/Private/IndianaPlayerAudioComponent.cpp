#include "IndianaPlayerAudioComponent.h"

UIndianaPlayerAudioComponent::UIndianaPlayerAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerDetectionStateDangerToUndetectedEarlyTransitionTime = 3.00f;
    this->WallaCheckTime = 3.00f;
    this->WallaFarDistance = 3000.00f;
    this->WallaMediumDistance = 3000.00f;
    this->WallaNearDistance = 3000.00f;
    this->WeaponSelectActiveStateValue = NULL;
    this->WeaponSelectInactiveStateValue = NULL;
    this->TTDActiveStateValue = NULL;
    this->TTDInactiveStateValue = NULL;
    this->StealthActiveStateValue = NULL;
    this->StealthInactiveStateValue = NULL;
    this->CalledShotActiveStateValue = NULL;
    this->CalledShotInactiveStateValue = NULL;
    this->KillCamActiveStateValue = NULL;
    this->KillCamInactiveStateValue = NULL;
    this->PlayerDetectionStateUndetectedStateValue = NULL;
    this->PlayerDetectionStateDangerStateValue = NULL;
    this->PlayerDetectionStateCombatStateValue = NULL;
    this->BerserkerStateActive = NULL;
    this->BerserkerStateInactive = NULL;
    this->ZyraniumStateLight = NULL;
    this->ZyraniumStateHeavy = NULL;
    this->ZyraniumStateEnd = NULL;
    this->DefaultRegionStateValue = NULL;
    this->DefaultArmorTypeStateValue = NULL;
    this->PerspectiveFirstPersonStateValue = NULL;
    this->PerspectiveThirdPersonNearStateValue = NULL;
    this->PerspectiveThirdPersonFarStateValue = NULL;
    this->PerspectiveFirstPersonSwitchValue = NULL;
    this->PerspectiveThirdPersonNearSwitchValue = NULL;
    this->PerspectiveThirdPersonFarSwitchValue = NULL;
    this->StealthActiveSwitchValue = NULL;
    this->StealthInactiveSwitchValue = NULL;
    this->FootstepVolumeRTPC = NULL;
    this->IsConversationRTPC = NULL;
    this->BattleHelmOfPteroBaneRTPC = NULL;
    this->RetroMarkOneRTPC = NULL;
    this->SuperRetroMarkTwoRTPC = NULL;
    this->EmitterPoolWrapper = NULL;
    this->FirstPersonListenerPositioningSettings = NULL;
    this->ThirdPersonNearListenerPositioningSettings = NULL;
    this->ThirdPersonFarListenerPositioningSettings = NULL;
}

void UIndianaPlayerAudioComponent::TacticalTimeDilationStart() {
}

void UIndianaPlayerAudioComponent::TacticalTimeDilationEnd(float Duration) {
}

void UIndianaPlayerAudioComponent::OnUnlockAbilityChanged(EUnlockAbility Ability) {
}

void UIndianaPlayerAudioComponent::OnStealthChange(bool bStealthed) {
}

void UIndianaPlayerAudioComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UIndianaPlayerAudioComponent::OnSlideStarted(UPlayerMovementComponent* MovementComp) {
}

void UIndianaPlayerAudioComponent::OnSlideEnded(UPlayerMovementComponent* MovementComp) {
}

void UIndianaPlayerAudioComponent::OnLadderSlideStarted(UPlayerMovementComponent* MovementComp) {
}

void UIndianaPlayerAudioComponent::OnLadderSlideEnded(UPlayerMovementComponent* MovementComp) {
}

void UIndianaPlayerAudioComponent::OnKillCameraStart(const AActor* CameraTarget) {
}

void UIndianaPlayerAudioComponent::OnKillCameraEnd() {
}

void UIndianaPlayerAudioComponent::OnHazardOccupancyChange(AIndianaCharacter* Character, bool bInside, EZyraniumType ZyraniumType) {
}

void UIndianaPlayerAudioComponent::OnDetectionChange(AActor* Detectee, EDetectionType DetectionType) {
}

void UIndianaPlayerAudioComponent::OnCompanionCommandCooldownEnd(ECompanionCommand Command, int32 CompanionIndex) {
}

void UIndianaPlayerAudioComponent::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}

void UIndianaPlayerAudioComponent::GamePauseChanged(bool bPaused) {
}


