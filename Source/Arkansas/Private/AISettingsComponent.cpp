#include "AISettingsComponent.h"

UAISettingsComponent::UAISettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HardPointUsage = EHardPointUsage::None;
    this->HardPointUsageTime = 10.00f;
    this->Role = NULL;
    this->Family = NULL;
    this->CloseQuarterTargetDistance = 600.00f;
    this->CloseQuarterTargetMaxLastStimulusAge = 3.00f;
    this->SimilarTargetDamagePercent = 0.15f;
    this->CompanionSelfPreservationTargetDamagePercent = 0.20f;
    this->RecentlySeenTargetMaxTime = 3.00f;
    this->ActiveTargetGreyDistance = 600.00f;
    this->PlayerPreferenceRecentlySeenTime = 1.50f;
    this->PlayerPreferenceRecentDamage = 0.05f;
    this->BehaviorTreeReferenceAsset = NULL;
    this->bIgnoreInvestigation = false;
    this->bIgnoreNavLinks = false;
    this->bUseNavLinksAsInCombat = false;
    this->bAvoidHazards = true;
    this->bAvoidTraps = true;
    this->bCanOpenDoors = false;
    this->bUseNavAgentOverride = false;
    this->DetectionMode = EDetectionMode::Perception;
    this->bGodVision = false;
    this->bVisionAnimationDrivenPreCombat = false;
    this->SoundCombatFootstepMaxDistance = -1.00f;
    this->PlayerProximityDistanceThreshold = 600.00f;
    this->bOverridePercentHpDamageForgiveness = false;
    this->PercentHpDamageForgivenessOverrideThreshold = 0.25f;
    this->bOverridePercentHpDamageForgiveness_InCombat = false;
    this->PercentHpDamageForgivenessOverrideThreshold_InCombat = 0.40f;
    this->bOverrideNumAttacksDamageForgiveness = false;
    this->NumAttacksDamageForgivenessOverrideThreshold = 6;
    this->bOverrideNumAttacksDamageForgiveness_InCombat = false;
    this->NumAttacksDamageForgivenessOverrideThreshold_InCombat = 10;
    this->CombatReaction = ECombatReaction::Attack;
    this->bHasBlindfireProbabilityOverride = false;
    this->CoverActionBlindfireProbabilityOverride = 0.00f;
    this->NumMeleeSlotsRequired = 1;
    this->SlotPriority = ESlotPriority::Normal;
    this->bCanBeStartled = false;
    this->FriendlyFireExtraGrenadeBlastRadius = 100.00f;
    this->WeaponPreference = EWeaponPreference::PreferRanged;
    this->bAbsoluteWeaponPreference = false;
    this->bOverrideDefensiveMeleeRange = false;
    this->OverrideDefensiveMeleeRange = 500.00f;
    this->bTetherEnabled = true;
    this->bUseTetherOverrideRadius = false;
    this->TetherOverrideRadius = 6000.00f;
    this->ParentDefaultBehaviorType = EParentDefaultBehaviorType::Idle;
    this->bParentOverrideWanderSettings = false;
    this->bIgnoreDistractionDevices = false;
    this->ParentDefaultBehavior = NULL;
    this->OocProximityConversationStartNode = -1;
    this->OocProximityConversationDistance = 500.00f;
    this->OocProximityConversationRequiresLineOfSight = false;
    this->AISettings = NULL;
    this->WeaponFireMaxMuzzleAngle = 45.00f;
    this->WeaponFireDepthNearRange = 300.00f;
    this->WeaponFireDepthNearMaxTime = 9.00f;
    this->WeaponFireDepthFarMaxTime = 3.00f;
    this->WeaponFireBlockedRemainInCoverMaxTime = 2.00f;
    this->WeaponLateralOffset = 0.00f;
    this->OutOfCombatSightConfigOverride = NULL;
    this->GrenadeAvoidancePercent = 100.00f;
    this->GrenadeAvoidanceMinDelay = 0.50f;
    this->GrenadeAvoidanceMaxDelay = 2.00f;
    this->HitByGrenadeAvoidancePercent = 100.00f;
    this->bDodgeEnable = false;
    this->Cooldown = 6.00f;
    this->DodgeRadius = 400.00f;
    this->MinJumpDistance = 100.00f;
    this->MaxJumpDistance = 2500.00f;
    this->MaxAIBuffZone = 2;
}

bool UAISettingsComponent::ShouldWander() {
    return false;
}

void UAISettingsComponent::OnWeaponSlotted(UItem* InSlottedWeapon) {
}

void UAISettingsComponent::OnWeaponSettingsUpdated(UAISettings_Weapon* WeaponSettings) {
}

void UAISettingsComponent::OnUnequipWeapon(UWeapon* Weapon) {
}

void UAISettingsComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UAISettingsComponent::OnEquipWeapon(UWeapon* Weapon) {
}

float UAISettingsComponent::GetWanderRadius() {
    return 0.0f;
}

float UAISettingsComponent::GetOocProxmityConversationDistance() const {
    return 0.0f;
}

int32 UAISettingsComponent::GetOocProximityConversationStartNode() const {
    return 0;
}

FOutOfCombatConversationRetriggerSettings UAISettingsComponent::GetOocProximityConversationRetriggerSettings() const {
    return FOutOfCombatConversationRetriggerSettings{};
}

bool UAISettingsComponent::GetOocProximityConversationRequiresLOS() const {
    return false;
}

FConversationReference UAISettingsComponent::GetOocProximityConversation() const {
    return FConversationReference{};
}


