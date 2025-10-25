#include "IndianaAiController.h"
#include "AIAnimProxySupportComponent.h"
#include "AIDetectionComponent.h"
#include "AIHazardAvoidanceComponent.h"
#include "AIInterruptsManagerComponent.h"
#include "AIOrientationComponent.h"
#include "AIOutOfCombatLogicComponent.h"
#include "AIPlayConversationComponent.h"
#include "AIWeaponFiringComponent.h"
#include "IndianaAIPerceptionComponent.h"
#include "IndianaPathFollowingComponent.h"
#include "OwBehaviorTreeComponent.h"
#include "OwBlackboardComponent.h"
#include "TargetInfoComponent.h"
#include "Templates/SubclassOf.h"

AIndianaAiController::AIndianaAiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIndianaPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->BrainComponent = CreateDefaultSubobject<UOwBehaviorTreeComponent>(TEXT("OwBTComponent"));
    this->PerceptionComponent = CreateDefaultSubobject<UIndianaAIPerceptionComponent>(TEXT("IndianaAIPerceptionComponent"));
    this->Blackboard = CreateDefaultSubobject<UOwBlackboardComponent>(TEXT("BlackboardComponent"));
    this->OwBehaviorTreeComponent = (UOwBehaviorTreeComponent*)BrainComponent;
    this->OwBlackboardComponent = (UOwBlackboardComponent*)Blackboard;
    this->TargetInfoComponent = CreateDefaultSubobject<UTargetInfoComponent>(TEXT("TargetInfoComponent"));
    this->AIDetectionComponent = CreateDefaultSubobject<UAIDetectionComponent>(TEXT("AIDetectionComponent"));
    this->IndianaPerceptionComponent = (UIndianaAIPerceptionComponent*)PerceptionComponent;
    FProperty* p_PathFollowingComponent_Prior = GetClass()->FindPropertyByName("PathFollowingComponent");
    this->IndianaPathFollowingComponent = (UIndianaPathFollowingComponent*)*p_PathFollowingComponent_Prior->ContainerPtrToValuePtr<UIndianaPathFollowingComponent*>(this);
    this->AIInterruptsManagerComponent = CreateDefaultSubobject<UAIInterruptsManagerComponent>(TEXT("AIInterruptsManagerComponent"));
    this->WeaponFiringComponent = CreateDefaultSubobject<UAIWeaponFiringComponent>(TEXT("AIWeaponFiringComponent"));
    this->OrientationComponent = CreateDefaultSubobject<UAIOrientationComponent>(TEXT("AIOrientationComponent"));
    this->OutOfCombatLogicComponent = CreateDefaultSubobject<UAIOutOfCombatLogicComponent>(TEXT("AIOutOfCombatLogicComponent"));
    this->AnimProxySupportComponent = CreateDefaultSubobject<UAIAnimProxySupportComponent>(TEXT("AIAnimProxySupportComponent"));
    this->HazardAvoidanceComponent = CreateDefaultSubobject<UAIHazardAvoidanceComponent>(TEXT("AIHazardAvoidanceComponent"));
    this->PatrolSupportComponent = NULL;
    this->PlayConversationComponent = CreateDefaultSubobject<UAIPlayConversationComponent>(TEXT("AIPlayConversationComponent"));
    this->CoverNodeSearchCooldown = 0.00f;
    this->bIsInCover = false;
    this->bBehaviorEnableCrouch = false;
    this->DefaultNavigationBehaviorFilterClass = NULL;
    this->DefaultNavigationEQSFilterClass = NULL;
    this->SightAwarenessDecreaseRates[0] = 0.00f;
    this->SightAwarenessDecreaseRates[1] = 0.00f;
    this->SightAwarenessDecreaseRates[2] = 0.00f;
    this->SightAwarenessDecreaseRates[3] = 0.00f;
    this->SightAwarenessDecreaseRates[4] = 0.00f;
    this->SightAwarenessDecreaseRates[5] = 0.00f;
    this->SneakAwarenessCurve = NULL;
    this->AIDebugLevelOverride = -1;
    this->BaseSAIR = 1000.00f;
    this->UnawarePeripheralSAIR = 0.10f;
    this->UnawareNonPeripheralSAIR = 2.50f;
    this->CautiousSAIR = 1.50f;
    this->AlertedPeripheralSAIR = 1.50f;
    this->AlertedNonPeripheralSAIR = 100.00f;
    this->StealthSAIR = 0.20f;
}

void AIndianaAiController::UnlockTargeting() {
}

bool AIndianaAiController::ShouldFindDynamicCover() {
    return false;
}

void AIndianaAiController::SetHardPoint(AHardPoint* InHardPoint) {
}

void AIndianaAiController::SetAllowDisableStatusEffectInterrupt(bool bInAllow) {
}

FAIMovementExtensionFlagsModifier AIndianaAiController::RemoveNavigationFlag(const FAIMovementExtensionFlagsModifier& NavigationFlagModifier, int32 NavigationFlags) {
    return FAIMovementExtensionFlagsModifier{};
}

void AIndianaAiController::OnWeaponEndEquip(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}

void AIndianaAiController::OnTakeDamage(const FCauseDamageInfo& CauseDamageInfo) {
}

void AIndianaAiController::OnSwitchedTarget(AActor* OldTarget, AActor* NewTarget, bool bRestoring) {
}

void AIndianaAiController::OnMeleeActionEnd(AActor* Attacker, EMeleeAction ActionEnded) {
}

void AIndianaAiController::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}

void AIndianaAiController::OnAlertStateChange(AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring) {
}

void AIndianaAiController::LockTargeting() {
}

bool AIndianaAiController::LineOfSightToTargetPoint(const AActor* Other, FVector ViewPoint, FVector TargetLocation) const {
    return false;
}

bool AIndianaAiController::K2_WantsAvoidHazards() const {
    return false;
}

void AIndianaAiController::K2_TurretReloadWeapon() {
}

bool AIndianaAiController::K2_TriggerThrowable(const FAIThrowableSettings& AIThrowableSettings) {
    return false;
}

bool AIndianaAiController::K2_TriggerMeleeAction(const FAIMeleeActionSettings AIMeleeActionSettings) {
    return false;
}

void AIndianaAiController::K2_SuspendWeaponAutoReload(const bool bSuspend) {
}

void AIndianaAiController::K2_SetWantCrouch(const bool bCrouch) {
}

void AIndianaAiController::K2_SetWaitingForCrimeResponseGroupBehavior(bool bWaiting) {
}

void AIndianaAiController::K2_SetTargetIsLost() {
}

void AIndianaAiController::K2_SetTargetAllowDecrementAlertState(AActor* Target, bool bAllow) {
}

void AIndianaAiController::K2_SetTargetAlertStateMinDuration(const float MinDuration) {
}

void AIndianaAiController::K2_SetStartled(bool bInValue) {
}

void AIndianaAiController::K2_SetSearchPointBehaviorWantsToExit(bool bWantsToExit) {
}

void AIndianaAiController::K2_SetPlayerTargetIsLost() {
}

void AIndianaAiController::K2_SetOccupyLocation(const FVector Location) {
}

void AIndianaAiController::K2_SetMovementState(const EAIMovementState AIMovementState, const float DynamicSpeed) {
}

void AIndianaAiController::K2_SetIsRespondingToCrime(const FGuid& CrimeID, bool bResponding) {
}

void AIndianaAiController::K2_SetIsCrimeResponseGroupBehaviorParticipant(bool bParticipant) {
}

void AIndianaAiController::K2_SetCoverTypeSide(const ECoverTypes CoverType, const ECoverSide CoverSide) {
}

void AIndianaAiController::K2_SetCoverType(const ECoverTypes CoverType) {
}

void AIndianaAiController::K2_SetCoverSide(const ECoverSide CoverSide) {
}

void AIndianaAiController::K2_SetCoverNode(ACoverNode* CoverNode) {
}

void AIndianaAiController::K2_SetCoverActionSide(const ECoverActions CoverAction, const ECoverSide CoverSide) {
}

void AIndianaAiController::K2_SetCoverAction(const ECoverActions CoverAction) {
}

void AIndianaAiController::K2_SetCanExecuteSearchPointBehaviors(bool bValue) {
}

bool AIndianaAiController::K2_RunAsyncEQSVectorQuery(const FEQSSelector EQSSelector, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, const FOnAsyncEQSVectorResult& Delegate) {
    return false;
}

UEnvQueryInstanceBlueprintWrapper* AIndianaAiController::K2_RunAsyncEQSQuery(const FEQSSelector EQSSelector, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, const FOnAsyncEQSResult& Delegate) {
    return NULL;
}

bool AIndianaAiController::K2_RunAsyncEQSActorQuery(const FEQSSelector EQSSelector, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, const FOnAsyncEQSActorResult& Delegate) {
    return false;
}

void AIndianaAiController::K2_ResumeCurrentMove() {
}

void AIndianaAiController::K2_ResolveCrime(const FGuid& CrimeID) {
}

void AIndianaAiController::K2_ResolveAllCrimesForFactionByID(const FGuid& CrimeID) {
}

void AIndianaAiController::K2_ResolveAllCrimesForFaction(TSubclassOf<UFactionData> Faction) {
}

void AIndianaAiController::K2_RequestNewTarget(const ETargetRequestType TargetRequestType) {
}

void AIndianaAiController::K2_RequestCrimeResponseIndividualBehavior(const FGuid& InCrimeID) {
}

void AIndianaAiController::K2_ReloadWeapon() {
}

bool AIndianaAiController::K2_ProjectPointToNavigation(const FVector& Point, FVector& ProjectedLocation, const FVector QueryExtent, bool bUseEQSNavigationFilter) const {
    return false;
}

void AIndianaAiController::K2_PauseCurrentMove() {
}


void AIndianaAiController::K2_NotifyRagdoll(bool bStarted) {
}

bool AIndianaAiController::K2_IsWeaponReloading() const {
    return false;
}

bool AIndianaAiController::K2_IsWeaponOutOfAmmo() const {
    return false;
}

bool AIndianaAiController::K2_IsWeaponAutoReloadSuspended() const {
    return false;
}

bool AIndianaAiController::K2_IsWaitingForCrimeResponseGroupBehavior() const {
    return false;
}

bool AIndianaAiController::K2_IsThrowInProgress() const {
    return false;
}

bool AIndianaAiController::K2_IsTargetSeen(bool& bValid) const {
    return false;
}

bool AIndianaAiController::K2_IsTargetEncroachingHardPoint() const {
    return false;
}

bool AIndianaAiController::K2_IsTargetAimingPossibleDepthTime(bool& bValid, float MaxDepth, float MaxCloseTime, float MaxFarTime) const {
    return false;
}

bool AIndianaAiController::K2_IsTargetAimingPossible(bool& bValid) const {
    return false;
}


bool AIndianaAiController::K2_IsStartled() const {
    return false;
}

bool AIndianaAiController::K2_IsRequestingCrimeResponseIndividualBehavior() const {
    return false;
}

bool AIndianaAiController::K2_IsOrientationControlActive() {
    return false;
}

bool AIndianaAiController::K2_IsMoving() const {
    return false;
}

bool AIndianaAiController::K2_IsMeleeAttacking() const {
    return false;
}

bool AIndianaAiController::K2_IsMeleeActionRecovering() const {
    return false;
}

bool AIndianaAiController::K2_IsMeleeActionExecuting() const {
    return false;
}

bool AIndianaAiController::K2_IsLocationInCoverNodeFiringArc(FVector Location) {
    return false;
}

bool AIndianaAiController::K2_IsLocationEncroachingHardPoint(FVector Location) const {
    return false;
}

bool AIndianaAiController::K2_IsInsideHardPoint(const bool bCheckForTargetEncroachment) const {
    return false;
}

bool AIndianaAiController::K2_IsInInterrupt() const {
    return false;
}

bool AIndianaAiController::K2_IsInGroupBehavior() const {
    return false;
}

bool AIndianaAiController::K2_IsInCover() const {
    return false;
}

bool AIndianaAiController::K2_IsFiringWeapon() {
    return false;
}

bool AIndianaAiController::K2_IsFireWeaponActive() {
    return false;
}

bool AIndianaAiController::K2_IsCompanion() const {
    return false;
}

bool AIndianaAiController::K2_IsActorSeen(bool& bValid, AActor* Actor) const {
    return false;
}

bool AIndianaAiController::K2_IsActorInCoverNodeFiringArc(AActor* Actor) {
    return false;
}

bool AIndianaAiController::K2_IsActorAimingPossible(bool& bValid, AActor* Actor) const {
    return false;
}

bool AIndianaAiController::K2_HasQueuedCompanionTeleport() const {
    return false;
}

bool AIndianaAiController::K2_HasHardPoint() const {
    return false;
}

bool AIndianaAiController::K2_HasCurrentTarget() const {
    return false;
}

float AIndianaAiController::K2_GetWeaponMaxPreferredRange(bool& bValid) const {
    return 0.0f;
}

int32 AIndianaAiController::K2_GetWeaponFireShotCount() {
    return 0;
}

TEnumAsByte<ETeamAttitude::Type> AIndianaAiController::K2_GetTeamAttitudeTowards(AActor* Actor) const {
    return ETeamAttitude::Friendly;
}

float AIndianaAiController::K2_GetTargetTimeSinceLastSeen(bool& bValid) const {
    return 0.0f;
}

float AIndianaAiController::K2_GetTargetTimeContinuousSeen(bool& bValid) const {
    return 0.0f;
}

FVector AIndianaAiController::K2_GetTargetSubLocation(bool& bValid, const ETargetInfoRelativeLocation TargetLocation, const ELocationType SubLocation) const {
    return FVector{};
}

EStimulusType AIndianaAiController::K2_GetTargetStimulusType(bool& bValid) const {
    return EStimulusType::None;
}

FVector AIndianaAiController::K2_GetTargetStimulusLocation(bool& bValid) const {
    return FVector{};
}

float AIndianaAiController::K2_GetTargetStimulusAge(bool& bValid) const {
    return 0.0f;
}

float AIndianaAiController::K2_GetTargetRecentDamage(bool& bValid) const {
    return 0.0f;
}

FVector AIndianaAiController::K2_GetTargetLocation(bool& bValid) const {
    return FVector{};
}

float AIndianaAiController::K2_GetTargetBlockingDepth(bool& bValid) const {
    return 0.0f;
}

float AIndianaAiController::K2_GetTargetAwarenessRemainingTime(bool& bValid) const {
    return 0.0f;
}

float AIndianaAiController::K2_GetTargetAwarenessMeter(bool& bValid) const {
    return 0.0f;
}

EStimulusType AIndianaAiController::K2_GetTargetAlertStateChangeStimulusType(bool& bValid) const {
    return EStimulusType::None;
}

EAlertState AIndianaAiController::K2_GetTargetAlertState(bool& bValid) const {
    return EAlertState::Unaware;
}

EStateOfBeing AIndianaAiController::K2_GetStateOfBeing() const {
    return EStateOfBeing::Healthy;
}

UAnimMontage* AIndianaAiController::K2_GetStartledAnimation() const {
    return NULL;
}


bool AIndianaAiController::K2_GetSearchPointBehaviorWantsToExit() const {
    return false;
}


float AIndianaAiController::K2_GetRunSpeed() const {
    return 0.0f;
}

float AIndianaAiController::K2_GetRecentDamageFromTarget(bool& bValid) const {
    return 0.0f;
}

int32 AIndianaAiController::K2_GetObjectSearchCount(UObject* Object) const {
    return 0;
}

EAIMovementState AIndianaAiController::K2_GetMovementState() {
    return EAIMovementState::Walk;
}

int32 AIndianaAiController::K2_GetMeleeActionIndex() const {
    return 0;
}

FGuid AIndianaAiController::K2_GetLastWitnessedCrimeID() const {
    return FGuid{};
}

FVector AIndianaAiController::K2_GetLastInvestigatedDeadBodyLocation(bool& bValid) const {
    return FVector{};
}

bool AIndianaAiController::K2_GetIsRespondingToCrime() const {
    return false;
}

bool AIndianaAiController::K2_GetIsCrimeResponseGroupBehaviorParticipant() const {
    return false;
}

bool AIndianaAiController::K2_GetIsCrimeResolved(const FGuid& CrimeID) {
    return false;
}

AHardPoint* AIndianaAiController::K2_GetHardPoint() const {
    return NULL;
}

AEncounter* AIndianaAiController::K2_GetEncounter() const {
    return NULL;
}

void AIndianaAiController::K2_GetDownedState(bool& bOutIsActive, bool& bOutIsComplete) const {
}

void AIndianaAiController::K2_GetDeathState(bool& bOutIsActive, bool& bOutIsComplete) const {
}

AActor* AIndianaAiController::K2_GetCurrentTarget() const {
    return NULL;
}

ECoverTypes AIndianaAiController::K2_GetCurrentCoverType() const {
    return ECoverTypes::FullHeight;
}

ECoverSide AIndianaAiController::K2_GetCurrentCoverSide() const {
    return ECoverSide::None;
}

ECoverActions AIndianaAiController::K2_GetCurrentCoverAction() const {
    return ECoverActions::None;
}

FGuid AIndianaAiController::K2_GetCrimeResponseIndividualBehaviorCrimeID() const {
    return FGuid{};
}

void AIndianaAiController::K2_GetCoverTypeSide(ECoverTypes& CoverType, ECoverSide& CoverSide) {
}

ACoverNode* AIndianaAiController::K2_GetCoverNode() {
    return NULL;
}

void AIndianaAiController::K2_GetCoverActionSide(ECoverActions& CoverAction, ECoverSide& CoverSide) {
}

int32 AIndianaAiController::K2_GetCompanionIndex() const {
    return 0;
}

UAnimMontage* AIndianaAiController::K2_GetCautiousToUnawareAnimation() const {
    return NULL;
}

AActor* AIndianaAiController::K2_GetBestDetectedTarget(const FCompareDetectedTargetsDelegate& DetectedTargetComparisonFunction) const {
    return NULL;
}

UAnimMontage* AIndianaAiController::K2_GetAlertedToCautiousAnimation() const {
    return NULL;
}

AIndianaAiCharacter* AIndianaAiController::K2_GetAICharacter() const {
    return NULL;
}

int32 AIndianaAiController::K2_GetActorTransitionToUnawareCount(bool& bValid, AActor* Actor) const {
    return 0;
}

float AIndianaAiController::K2_GetActorTimeSinceLastSeen(bool& bValid, AActor* Actor) const {
    return 0.0f;
}

FVector AIndianaAiController::K2_GetActorSubLocation(bool& bValid, AActor* Actor, const ETargetInfoRelativeLocation TargetLocation, const ELocationType SubLocation) const {
    return FVector{};
}

float AIndianaAiController::K2_GetActorStimulusAge(bool& bValid, AActor* Actor) const {
    return 0.0f;
}

FVector AIndianaAiController::K2_GetActorLocationAtTargetLastSeen(bool& bValid) const {
    return FVector{};
}

float AIndianaAiController::K2_GetActorAwarenessMeter(bool& bValid, AActor* Actor) const {
    return 0.0f;
}

EAlertState AIndianaAiController::K2_GetActorAlertState(bool& bValid, AActor* Actor) const {
    return EAlertState::Unaware;
}

UAIBehaviorClass* AIndianaAiController::K2_GetActiveBehaviorClassInstance(TSubclassOf<UAIBehaviorClass> OptionalClassFilter) const {
    return NULL;
}

void AIndianaAiController::K2_ForgetTarget(AActor* Target) {
}

void AIndianaAiController::K2_ForgetPlayerTarget() {
}

bool AIndianaAiController::K2_ForceExitActiveGroupBehavior() {
    return false;
}

void AIndianaAiController::K2_ForceCrimeDetection(const FGuid& CrimeID) {
}

void AIndianaAiController::K2_ForceClearMeleeRecovery() {
}

void AIndianaAiController::K2_ExecuteCompanionTeleport(const bool bClearTargetDetection, const float ClearTargetRange) {
}

bool AIndianaAiController::K2_CompareDetectedTargets_Implementation(const FDetectedTargetInfoReference& TargetA, const FDetectedTargetInfoReference& TargetB) {
    return false;
}

void AIndianaAiController::K2_ClearOccupyLocations() {
}

void AIndianaAiController::K2_ClearMovementState() {
}

void AIndianaAiController::K2_ClearCrimeResponseIndividualBehaviorRequest() {
}

void AIndianaAiController::K2_ClearCoverNode() {
}

ECheckLineOfSightResult AIndianaAiController::K2_CheckLineOfSightToTargetLocations(const ETargetInfoRelativeLocation TargetLocation) const {
    return ECheckLineOfSightResult::None;
}

ECheckLineOfSightResult AIndianaAiController::K2_CheckLineOfSightToActorLocations(AActor* Actor, const ETargetInfoRelativeLocation TargetLocation) const {
    return ECheckLineOfSightResult::None;
}

bool AIndianaAiController::K2_CanTrackTargetAtLocation_Implementation(const FStimulusReference& Stimulus) const {
    return false;
}

bool AIndianaAiController::K2_CanTargetActor(bool& bValid, AActor* Actor) const {
    return false;
}

bool AIndianaAiController::K2_CanEngageTarget(bool& bValid, float MaxRange) const {
    return false;
}

void AIndianaAiController::K2_CancelWeaponReload(bool bRefillAmmo) {
}

void AIndianaAiController::K2_CancelMeleeAction() {
}

void AIndianaAiController::K2_CancelAllMovement() {
}

FAIMovementExtensionFlagsModifier AIndianaAiController::K2_ApplyDefaultExtensionFlags_Implementation(FAIMovementExtensionFlagsModifier NavigationFlagModifier) {
    return FAIMovementExtensionFlagsModifier{};
}

bool AIndianaAiController::IsTargetingLocked() const {
    return false;
}

bool AIndianaAiController::IsOnCrouchNav() {
    return false;
}

bool AIndianaAiController::IsLocationInsideHardPoint(FVector Location) const {
    return false;
}

bool AIndianaAiController::HasClearPath(FVector Destination, bool bCheckNavigation, bool bCheckObjects) const {
    return false;
}

bool AIndianaAiController::HasActiveFindPathAsyncQuery() const {
    return false;
}

bool AIndianaAiController::HACK_ShouldPreventInterrupts() const {
    return false;
}

float AIndianaAiController::GetSightAwarenessIncreaseRate(bool bIsStealthed, int32 OwnerPerceptionSkill, int32 TargetSneakSkill, EAlertState InAlertState, float Distance, float NormalizedDistance, float FurthestDistanceAwarenessFillRateScalar, bool bInPeripheral, bool bTargetActivelyPerformingTakedown, bool bTargetRecentlyPerformedTakedown) const {
    return 0.0f;
}

float AIndianaAiController::GetSightAwarenessDecreaseRate(bool bIsStealthed, int32 OwnerPerceptionSkill, int32 TargetSneakSkill, EAlertState InAlertState, bool bLost, bool bDeadBodyKiller) const {
    return 0.0f;
}


float AIndianaAiController::GetDamageByPlayer() {
    return 0.0f;
}

float AIndianaAiController::GetCurrentTargetFacing() const {
    return 0.0f;
}

float AIndianaAiController::GetCurrentTargetDistance() const {
    return 0.0f;
}

int32 AIndianaAiController::GetAIDebugLevel() {
    return 0;
}

bool AIndianaAiController::GenerateLocationInsideHardPoint(FVector& Location) {
    return false;
}

FAIOrientationControl AIndianaAiController::CrimeTrackPlayerControlPoll() {
    return FAIOrientationControl{};
}

void AIndianaAiController::ClearShouldFindDynamicCover() {
}

bool AIndianaAiController::CanSeeActor(AActor* Actor) {
    return false;
}

bool AIndianaAiController::CanEnterCombat() const {
    return false;
}

void AIndianaAiController::CancelMoveCompletedCallback() {
}

void AIndianaAiController::AIScriptWander(AIndianaAiCharacter* InCharacter) {
}

void AIndianaAiController::AIScriptStopAttack(AIndianaAiCharacter* InCharacter) {
}

void AIndianaAiController::AIScriptPatrolInterruptible(AIndianaAiCharacter* InCharacter, APatrolNode* InPatrolNode) {
}

void AIndianaAiController::AIScriptPatrol(AIndianaAiCharacter* InCharacter, APatrolNode* InPatrolNode) {
}

void AIndianaAiController::AIScriptIdle(AIndianaAiCharacter* InCharacter) {
}

void AIndianaAiController::AIScriptEncounterAttackEncounter(AEncounter* InEncounter, AEncounter* InTargetEncounter) {
}

void AIndianaAiController::AIScriptEncounterAttack(AIndianaAiCharacter* InCharacter, AEncounter* InTargetEncounter) {
}

void AIndianaAiController::AIScriptCharactersAttackCharacters(TArray<AIndianaAiCharacter*> InCharacters, TArray<AIndianaAiCharacter*> InTargetCharacters) {
}

void AIndianaAiController::AIScriptAttackEncounter(AEncounter* InEncounter, AIndianaCharacter* InTargetCharacter) {
}

void AIndianaAiController::AIScriptAttack(AIndianaAiCharacter* InCharacter, AIndianaCharacter* InTargetCharacter) {
}

void AIndianaAiController::AIDebugPrintTime(const FText Text, int32 Level, float Time) {
}

void AIndianaAiController::AIDebugPrint(const FText Text, int32 Level) {
}

FAIMovementExtensionFlagsModifier AIndianaAiController::AddNavigationFlag(const FAIMovementExtensionFlagsModifier& NavigationFlagModifier, int32 NavigationFlags) {
    return FAIMovementExtensionFlagsModifier{};
}

void AIndianaAiController::AbortAndResetFindPathAsyncQuery() {
}


