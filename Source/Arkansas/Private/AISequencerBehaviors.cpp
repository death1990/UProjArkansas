#include "AISequencerBehaviors.h"

UAISequencerBehaviors::UAISequencerBehaviors() {
}

void UAISequencerBehaviors::VaultToLocation(AIndianaAiCharacter* Character, FVector LocalLandingLocation, FVector LocalLedgeFrontLocation, FVector LocalLedgeBackLocation) const {
}

void UAISequencerBehaviors::UsePreviousAnimProxy(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::UseAnimProxy(AIndianaAiCharacter* Character, FMovieSceneObjectBindingID AnimProxyInteractableBinding, const FGameplayTag SlotKey, const bool bTeleport, const bool bTeleportOnMoveFail, const bool bInterruptOnMove, const bool bInfiniteDuration, const bool bAutoDeactivate) const {
}

void UAISequencerBehaviors::UnequipArmorInSlot(AIndianaAiCharacter* Character, EArmorSlot ArmorSlot) const {
}

void UAISequencerBehaviors::TriggerQuickMelee(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::Suicide(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::StopUsingAnimProxy(AIndianaAiCharacter* Character, bool bSkipProxyExit, bool bExitImmediatelyOnNodeSkip) const {
}

void UAISequencerBehaviors::ShootTarget_SwitchToNeutralAnimState(TWeakObjectPtr<AIndianaAiCharacter> InCharacter, bool bInstantBlend) const {
}

void UAISequencerBehaviors::ShootTarget_StopShooting(TWeakObjectPtr<AIndianaAiCharacter> InCharacter) const {
}

void UAISequencerBehaviors::ShootTarget_OnWeaponAttack(UWeapon* Weapon) const {
}

void UAISequencerBehaviors::ShootTarget_OnTargetTakenDamage(const FCauseDamageInfo& CauseDamageInfo) const {
}

void UAISequencerBehaviors::ShootTarget_OnPlayerSkippedNode(UOwConversationInstance* InConversationInstance) const {
}

void UAISequencerBehaviors::ShootTarget_CombatStateFullyBlended(TWeakObjectPtr<AIndianaAiCharacter> InCharacter) const {
}

void UAISequencerBehaviors::ShootTarget(AIndianaAiCharacter* Character, const FMovieSceneObjectBindingID& Target, int32 NumOfShots, int32 InstantKillShotIndex, FName SocketOnTarget, bool bShouldDismemberOnKill, bool bBlendAnimationState) const {
}

void UAISequencerBehaviors::SetOrientation(AIndianaAiCharacter* Character, TEnumAsByte<ETrackingRegion> TrackingRegion, FAIOrientationControl AIOrientationControl) const {
}

void UAISequencerBehaviors::SetHeadTrackingLockState(AIndianaAiCharacter* Character, bool bLocked, bool bMaintainCurrentOrientation) const {
}

void UAISequencerBehaviors::SetConversationLookAtTarget(AIndianaAiCharacter* Character, const FMovieSceneObjectBindingID& Binding, bool bPersist, bool bTurnBody, bool bSnapToLookAtOnNodeSkipped, const FForceBodyTrackingAngleParams& ExactAngleParams) const {
}

void UAISequencerBehaviors::SetConversationBodyRotationComfortAngle(AIndianaAiCharacter* Character, float Angle, bool bReevaluateBodyAngle) const {
}

void UAISequencerBehaviors::SetCanUnequipWeapon(AIndianaAiCharacter* Character, bool bCanUnequip) const {
}

void UAISequencerBehaviors::SetBodyTrackingLockState(AIndianaAiCharacter* Character, bool bLocked, bool bMaintainCurrentOrientation) const {
}

void UAISequencerBehaviors::SetBodyTrackingIgnoreState(AIndianaAiCharacter* Character, TEnumAsByte<ETrackingRegion> TrackingRegion, bool bIgnoreBodyTracking) const {
}

void UAISequencerBehaviors::ResetConversationBodyRotationComfortAngle(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::RemoveForcedBodyAngleRelativeToTarget(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::RemoveCurrentStageMarkLock(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::RegisterConversationParticipant(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::PlayMotionWarpingAnimMontage(AIndianaAiCharacter* Character, UAnimMontage* MontageToPlay, TArray<FTransform> LocalSyncTransforms) const {
}

void UAISequencerBehaviors::PlayAnimMontage(AIndianaAiCharacter* Character, UAnimMontage* MontageToPlay) const {
}

void UAISequencerBehaviors::MantleToLocation(AIndianaAiCharacter* Character, FVector LocalLandingLocation, FVector LocalLedgeLocation) const {
}

void UAISequencerBehaviors::JumpAcrossToLocation(AIndianaAiCharacter* Character, FVector LocalLandingLocation, float HeightOverride) const {
}

void UAISequencerBehaviors::HolsterWeapon(AIndianaAiCharacter* Character, bool bInstant) const {
}

void UAISequencerBehaviors::FireWeaponStop(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::FireWeaponStart(AIndianaAiCharacter* Character, const FAIWeaponFiringSettings& AIWeaponFiringSettings) const {
}

void UAISequencerBehaviors::ExitSequencer(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::EquipWeaponByTag(AIndianaAiCharacter* Character, const FGameplayTag Tag, bool bInstant) const {
}

void UAISequencerBehaviors::EquipWeaponBySlot(AIndianaAiCharacter* Character, int32 SlotIndex, bool bInstant) const {
}

void UAISequencerBehaviors::EquipWeaponByInstance(AIndianaAiCharacter* Character, const UWeapon* Weapon, bool bInstant) const {
}

void UAISequencerBehaviors::EquipItem(AIndianaAiCharacter* Character, const FItemDefinitionVariant& ItemDefinition) const {
}

void UAISequencerBehaviors::DropDownToLocation(AIndianaAiCharacter* Character, FVector LocalLandingLocation, FVector LocalLedgeLocation) const {
}

void UAISequencerBehaviors::ClearPersistentLookAtTarget(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::ClearOrientation(AIndianaAiCharacter* Character, TEnumAsByte<ETrackingRegion> TrackingRegion) const {
}

void UAISequencerBehaviors::ClearAllOrientation(AIndianaAiCharacter* Character) const {
}

void UAISequencerBehaviors::CallGroupBehaviorEvent(AIndianaAiCharacter* Character, FName EventName) const {
}

void UAISequencerBehaviors::AssignStageMark(AIndianaAiCharacter* Character, FMovieSceneObjectBindingID StageMarkActorBinding, EStageMarkAssignmentType StageMarkAssignmentType, bool bApplyStageMarkLock, bool bTeleportOnNodeSkipped) const {
}

void UAISequencerBehaviors::ApplyForcedBodyAngleRelativeToTarget(AIndianaAiCharacter* Character, float InAngle) const {
}


