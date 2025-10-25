#include "IndianaCharacter.h"
#include "ArmorComponent.h"
#include "BlockComponent.h"
#include "CharacterInfoComponent.h"
#include "CharacterInventoryComponent.h"
#include "ChatterComponent.h"
#include "DamageableComponent.h"
#include "EnvironmentInteractionComponent.h"
#include "IndianaAudioComponent.h"
#include "IndianaCharMovementComponent.h"
#include "MeleeSlotManagerComponent.h"
#include "ReactionComponent.h"
#include "SpellManagerComponent.h"
#include "StatusEffectManagerComponent.h"
#include "TargetingComponent.h"
#include "TeamComponent.h"
#include "Templates/SubclassOf.h"

AIndianaCharacter::AIndianaCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIndianaCharMovementComponent>(TEXT("CharMoveComp"))) {
    this->bShouldSaveGameState = true;
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->IndianaCharacterMovementComponent = (UIndianaCharMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UIndianaCharMovementComponent*>(this);
    this->OverrideDummyClass = NULL;
    this->CombatEffectApplyMultiplier = 1.00f;
    this->SpreadManagerComponent = NULL;
    this->DamageableComponent = CreateDefaultSubobject<UDamageableComponent>(TEXT("Damageable"));
    this->ArmorComponent = CreateDefaultSubobject<UArmorComponent>(TEXT("Armor"));
    this->StatusEffectManagerComponent = CreateDefaultSubobject<UStatusEffectManagerComponent>(TEXT("StatusEffectManager"));
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UCharacterInventoryComponent>(TEXT("Inventory"));
    this->BlockComponent = CreateDefaultSubobject<UBlockComponent>(TEXT("BlockComponent"));
    this->ReactionComponent = CreateDefaultSubobject<UReactionComponent>(TEXT("ReactionComponent"));
    this->SpecialIDComponent = NULL;
    this->EnvironmentComponent = CreateDefaultSubobject<UEnvironmentInteractionComponent>(TEXT("EnvironmentComponent"));
    this->AudioComponentClass = UIndianaAudioComponent::StaticClass();
    this->SpellManagerComponent = CreateDefaultSubobject<USpellManagerComponent>(TEXT("SpellManagerComponent"));
    this->HealthComponent = NULL;
    this->DeathComponent = NULL;
    this->EquipmentComponent = NULL;
    this->RpgStatComponent = NULL;
    this->CharacterInfoComponent = CreateDefaultSubobject<UCharacterInfoComponent>(TEXT("CharacterInfo"));
    this->SlotManagerComponent = CreateDefaultSubobject<UMeleeSlotManagerComponent>(TEXT("SlotManagerComponent"));
    this->TargetableComponent = NULL;
    this->AppearanceComponent = NULL;
    this->IndianaAudioComponent = NULL;
    this->ConversationLightingRigComponent = NULL;
    this->BaseTargetingComponent = CreateDefaultSubobject<UTargetingComponent>(TEXT("TargetingComponent"));
    this->bCanBeInvestigated = true;
    this->bIgnoreForProtestKill = false;
    this->DifficultyRpgStatModifiers = NULL;
    this->OutOfCombatCylinderRadiusScalar = 1.00f;
    this->ConversationCylinderRadiusScalar = 0.50f;
    this->bInterruptAnimationProxyOnMove = false;
    this->CharacterScaleModifier = 1.00f;
    this->ForceMinLODThreshold = 0.40f;
    this->OnScaleForceMinLOD = -1;
    this->ChatterComponent = CreateDefaultSubobject<UChatterComponent>(TEXT("ChatterComponent"));
    this->bIsMeleeAttack = false;
    this->MeleeAttackCounter = 0;
    this->PreservationTimer = 0.00f;
    this->ConversationStageMark = NULL;
    this->Lifetime = -1.00f;
    this->ReaquiredFromPoolHideTime = -1.00f;
    this->bShouldInstantGetupFromPool = true;
    this->OwningPool = NULL;
    this->TrackedSocketOnRagdoll = TEXT("Chest");
    this->CharacterTeleportDistanceThreshold = 5.00f;
    this->RagdollSettleTime = 2.00f;
    this->RagdollTurnOffMotorsTime = 2.00f;
    this->RagdollFreezeTime = 10.00f;
    this->RagdollMaxZSpeed = 4000.00f;
    this->OverrideLinearDampingIfExceedsMaxSpeed = 20.00f;
    this->bIsPet = false;
    this->OnPetGlobalVariableValue = 1;
    this->CameraFocusSocket = TEXT("CameraFocus");
    this->bRiftedCharacter = false;
}

void AIndianaCharacter::UseAnimProxyDuringSequenceWithKey(FMovieSceneObjectBindingID ActorUsingAnimProxyBinding, FMovieSceneObjectBindingID AnimProxyInteractableBinding, FGameplayTag AnimProxyKey) {
}

void AIndianaCharacter::UseAnimationProxyAtPoint(FGameplayTag Key, FTransform FinalTransform, UAnimationProxyData* Data) {
}

void AIndianaCharacter::UseAnimationProxy(UAnimationProxyComponent* AnimationProxy, bool bIsInfiniteTime) {
}

void AIndianaCharacter::UpdateOutlines() {
}

UOwConversationInstance* AIndianaCharacter::StartInterrogationConversation() {
    return NULL;
}

void AIndianaCharacter::SetRagdoll(bool bInIsRagdoll, bool bInstantFreeze, bool bRestoring) {
}

void AIndianaCharacter::SetInteractTarget(bool bIsTarget, UInteractableComponent* Interactable) {
}


void AIndianaCharacter::SetConversationLighting(bool bTurnOn) {
}

void AIndianaCharacter::SetCanPlayLocomotionStops(bool bCanPlay) {
}

void AIndianaCharacter::SetCanPlayLocomotionOneShots(bool bCanPlay) {
}

void AIndianaCharacter::SetCanBeInvestigated(bool bInCanBeInvestigated) {
}

void AIndianaCharacter::ResetPreservationTimer() {
}

void AIndianaCharacter::RemoveSpell(TSubclassOf<USpell> SpellType) {
}

void AIndianaCharacter::RemoveCurrentStageMarkLock() {
}

void AIndianaCharacter::PlayWeaponEvent(const FString& WeaponEvent) {
}

void AIndianaCharacter::OnTeleportedToStageMark(bool bTeleported) {
}



void AIndianaCharacter::OnRagdollImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AIndianaCharacter::OnParkourCompleted(const FParkourMove& ParkourMove) {
}

void AIndianaCharacter::OnParkourBegin(const FParkourMove& ParkourMove) {
}

void AIndianaCharacter::OnLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 Level) {
}

void AIndianaCharacter::OnGetupDelegate(UTPVAnimInstance* InAnimInstance, bool bInStarted) {
}


void AIndianaCharacter::OnDifficultyChanged(EGameDifficulty NewDifficulty) {
}

void AIndianaCharacter::OnAppearanceApplied() {
}

void AIndianaCharacter::ManuallyAssignCharacterToStageMark(FSpeakerReference SpeakerReference, AOwStageMarkActor* StageMarkActor, EStageMarkAssignmentType StageMarkAssignmentType, bool bApplyStageMarkLock, bool bTeleportOnNodeSkipped) {
}

void AIndianaCharacter::K2_ToggleAction(ETogglableAction Action, bool bToggleOn) {
}

void AIndianaCharacter::K2_LockAnimationProxyTaskWaitState(bool Block, FName LockedWaitStateSource) {
}

bool AIndianaCharacter::K2_IsUsingAnimationProxy() const {
    return false;
}

float AIndianaCharacter::K2_GetTimeSinceCombat() const {
    return 0.0f;
}

float AIndianaCharacter::K2_GetTimeInCombat() const {
    return 0.0f;
}

ESpellCastResult AIndianaCharacter::K2_CastSpellOnTargets(TSubclassOf<USpell> SpellType, const TArray<AActor*>& Targets) {
    return ESpellCastResult::Success;
}

bool AIndianaCharacter::K2_CanCastSpell(TSubclassOf<USpell> SpellType) const {
    return false;
}

void AIndianaCharacter::ItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& Item) {
}

void AIndianaCharacter::ItemAdded(UInventoryComponent* InInventoryComponent, const FItemStack& Item) {
}

bool AIndianaCharacter::IsWeaponEquippedBranching(TSubclassOf<UWeapon> WeaponClass, EBoolResult& OutResult) {
    return false;
}

bool AIndianaCharacter::IsWeaponEquipped(TSubclassOf<UWeapon> WeaponClass) const {
    return false;
}

bool AIndianaCharacter::IsWeakCreatureType(ECreatureXPType CreatureXPType) const {
    return false;
}

bool AIndianaCharacter::IsWeak() const {
    return false;
}

bool AIndianaCharacter::IsPet() const {
    return false;
}

bool AIndianaCharacter::IsInCombatWithPlayer(bool bIncludeCompanions) const {
    return false;
}

bool AIndianaCharacter::IsInCombatBranching(EBoolResult& OutResult) {
    return false;
}

bool AIndianaCharacter::IsHigherTierThanPlayer() const {
    return false;
}

bool AIndianaCharacter::IsDoingParkourVault() const {
    return false;
}

bool AIndianaCharacter::IsDoingParkourMantle() const {
    return false;
}

bool AIndianaCharacter::IsDoingParkour() const {
    return false;
}

bool AIndianaCharacter::IsArmorEquippedBranching(TSubclassOf<UArmorItem> ArmorClass, EBoolResult& OutResult) {
    return false;
}

bool AIndianaCharacter::IsArmorEquipped(TSubclassOf<UArmorItem> ArmorClass) const {
    return false;
}

bool AIndianaCharacter::IsAnyWeaponEquipped() const {
    return false;
}

void AIndianaCharacter::InterruptAnimationProxyTask(EProxyTaskInterruptType InterruptReason) {
}

bool AIndianaCharacter::HasItemBranching(TSubclassOf<UItem> Item, EBoolResult& OutResult) {
    return false;
}

bool AIndianaCharacter::HasItem(TSubclassOf<UItem> Item) const {
    return false;
}

bool AIndianaCharacter::HasInterrogationConversation() const {
    return false;
}

bool AIndianaCharacter::HasActiveMotionWarpRootMotionSource() const {
    return false;
}

void AIndianaCharacter::HandleLanded(float FallDistance, const FHitResult& Hit) {
}

void AIndianaCharacter::GrippingIKClearTargets() {
}

float AIndianaCharacter::GetTimeSinceLastAttackedByPlayer() const {
    return 0.0f;
}

UStatusEffectManagerComponent* AIndianaCharacter::GetStatusEffectManager() const {
    return NULL;
}

bool AIndianaCharacter::GetPassesConditionals(EInteractionType InteractionType) {
    return false;
}

int32 AIndianaCharacter::GetItemQuantity(TSubclassOf<UItem> Item) const {
    return 0;
}

FLocString AIndianaCharacter::GetInteractName() const {
    return FLocString{};
}

TArray<EInteractionType> AIndianaCharacter::GetInteractions(const FInteractionDescription& Description) const {
    return TArray<EInteractionType>();
}

float AIndianaCharacter::GetInteractHoldTime(const FInteractionDescription& Description) {
    return 0.0f;
}

bool AIndianaCharacter::GetInActorPool() {
    return false;
}

FGameplayTag AIndianaCharacter::GetGameplayTag() const {
    return FGameplayTag{};
}

void AIndianaCharacter::GetCachedCollisionCylinder(float& OutCollisionRadius, float& OutCollisionHalfHeight) const {
}

TArray<UMeshComponent*> AIndianaCharacter::GetCachedAppearanceMeshes() const {
    return TArray<UMeshComponent*>();
}

EProxyTaskState AIndianaCharacter::GetAnimationProxyState() const {
    return EProxyTaskState::PlayingEnterMontage;
}

FVector AIndianaCharacter::GetActorFeetLocation() const {
    return FVector{};
}

void AIndianaCharacter::FreeToPoolBP() {
}



void AIndianaCharacter::DamageCaused(const FCauseDamageInfo& CauseDamageInfo) {
}

void AIndianaCharacter::ConversationRefreshFPVFramingTargets(AActor* LookTargetOverride) {
}

void AIndianaCharacter::ConversationLookAtTarget(FVector TargetLocation, bool TurnBody, bool MaintainBetweenNodes) {
}

void AIndianaCharacter::ConversationLookAtSpeaker(FSpeakerReference TargetSpeaker, bool TurnBody, bool MaintainBetweenNodes) {
}

void AIndianaCharacter::ConversationLookAtActor(AActor* TargetActor, bool TurnBody, bool MaintainBetweenNodes) {
}

void AIndianaCharacter::CompleteInteract(const FInteractionDescription& Description) {
}

void AIndianaCharacter::CastSpellDebugTargetFromSelf(const FString& SpellName) {
}

void AIndianaCharacter::CastSpellDebugTarget(const FString& SpellName) {
}

void AIndianaCharacter::CastSpellDebug(const FString& SpellName) {
}

ESpellCastResult AIndianaCharacter::CastSpell(TSubclassOf<USpell> SpellType) {
    return ESpellCastResult::Success;
}

bool AIndianaCharacter::CanPlayLocomotionStops() {
    return false;
}

bool AIndianaCharacter::CanPlayLocomotionOneShots() {
    return false;
}

bool AIndianaCharacter::CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const {
    return false;
}

bool AIndianaCharacter::CanBeSeenBy(AIndianaCharacter* Observer, FVector& OutSeenLocation, bool bDebug) const {
    return false;
}



