#include "InteractableComponent.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->InitialStateOCL = EOCLState::Closed;
    this->KeyItem = NULL;
    this->bRemoveKeyAfterUse = false;
    this->InteractDifficulty = ESkillDifficultyRange::Invalid;
    this->bForceInteractTier = false;
    this->ForcedInteractTier = ESkillDifficultyTier::One;
    this->LockpickItem = NULL;
    this->HackingItem = NULL;
    this->AutoCloseDelay = 0.00f;
    this->AutoCloseDelayNPC = 0.00f;
    this->AutoCloseRadius = 0.00f;
    this->bIgnoreForCrime = false;
    this->InitialTerminalState = ETerminalLockState::Hacked;
    this->OwningFaction = NULL;
    this->FacingAngle = 360;
    this->FacingAngleRotation = 0;
    this->ConversationInteractRangeOverride = 0.00f;
    this->NoInputInteractRangeOverride = 0.00f;
    this->bDoesRequirePlayerInteraction = true;
    this->DefaultHoldTime = 0.00f;
    this->bCanUseWhileFalling = false;
    this->bIsCrime = true;
    this->bBlockPropagation = false;
    this->bInteractionsEnabled = true;
    this->bInitialInteractionEnabled = true;
    this->InteractionEvent = NULL;
    this->bLockInteractionEvent = false;
    this->bDefaultCanHighlightDirect = true;
    this->bDefaultCanHighlightProximity = true;
    this->bDefaultCanHighlightThrowableProximity = false;
    this->bAutoRegisterToOctree = true;
    this->ObservationGuideTriggerRange = 1000.00f;
    this->ObservationGuideMaxZOffset = 400.00f;
    this->CustomHighlightStencilValue = 0;
    this->OwnerType = EOwnerType::Generic;
    this->bHasAudioStimulus = false;
    this->AudioStimulusRadius = EAudioStimulusRadius::Small;
    this->AudioStimulusRadiusOverride = 0.00f;
    this->AudioStimulusSoundType = ESoundDetectionType::None;
    this->CurrentStateOCL = EOCLState::Closed;
    this->CurTerminalState = ETerminalLockState::Hacked;
}

void UInteractableComponent::UpdateInteractHold_Implementation(float ElapsedTime) {
}

void UInteractableComponent::UnsealOCL(bool bFireOCLUnsealedEvent) {
}

void UInteractableComponent::UnlockOCL(bool bFireOCLUnlockedEvent) {
}

void UInteractableComponent::UnjamOCL(bool bFireOCLJammedEvent) {
}

void UInteractableComponent::UnbarOCL(bool bFireOCLUnbarredEvent, bool bEnterLockedState) {
}

void UInteractableComponent::ToggleInteraction() {
}

void UInteractableComponent::StartInteract_Implementation(const FInteractionDescription& Description) {
}

void UInteractableComponent::SignalOCLAnimationComplete() {
}

void UInteractableComponent::SetInteractionState(int32 StateIn, bool bForceExecute) {
}

void UInteractableComponent::SetInteractionsEnabled(bool bNewInteractionsEnabled) {
}

void UInteractableComponent::SetCurrentInteractivityStateTemporary(bool bIsTemporary) {
}

void UInteractableComponent::SealOCL(bool bFireOCLSealedEvent) {
}

void UInteractableComponent::OverrideComponentsBoundingBox(const FBox& OverrideBox, bool bRegisterToOctree) {
}

EOCLResult UInteractableComponent::OpenOCL(AActor* Initiator, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation) {
    return EOCLResult::Success;
}

void UInteractableComponent::OnPageExit(URPGExaminableData* RPGExaminableData, int32 PageIndex, bool bWasUIClosed) {
}

void UInteractableComponent::OnPageEnter(URPGExaminableData* RPGExaminableData, int32 PageIndex) {
}

void UInteractableComponent::OnPageChoiceSelect(URPGExaminableData* RPGExaminableData, int32 PageIndex, int32 PageChoiceIndex) {
}

void UInteractableComponent::OnInteractStateInteract(int32 StateIndex) {
}

void UInteractableComponent::OnInteractStateChanged(int32 NewState, int32 OldState) {
}

void UInteractableComponent::OnGadgetDeactivated(FGameplayTag GameplayTag) {
}

void UInteractableComponent::OnGadgetActivated(FGameplayTag GameplayTag) {
}

void UInteractableComponent::OnFpvAnimProxyComplete() {
}

void UInteractableComponent::OnConversationInstanceEnded(UOwConversationInstance* ConversationInstanceShuttingDown) {
}

void UInteractableComponent::LockOCL(bool bFireOCLLockedEvent) {
}

void UInteractableComponent::JamOCL(bool bFireOCLJammedEvent) {
}

bool UInteractableComponent::IsSealing() const {
    return false;
}

bool UInteractableComponent::IsSealed() const {
    return false;
}

bool UInteractableComponent::IsOpening() const {
    return false;
}

bool UInteractableComponent::IsOpen() const {
    return false;
}

bool UInteractableComponent::IsLocked() const {
    return false;
}

bool UInteractableComponent::IsJammed() const {
    return false;
}

bool UInteractableComponent::IsInteractionCrime() {
    return false;
}

bool UInteractableComponent::IsConsolidationEnabled() const {
    return false;
}

bool UInteractableComponent::IsClosing() const {
    return false;
}

bool UInteractableComponent::IsClosed() const {
    return false;
}

bool UInteractableComponent::IsBarred() const {
    return false;
}

bool UInteractableComponent::IsActorInFrontOfOCL(AActor* Actor) const {
    return false;
}

bool UInteractableComponent::HasWirePower() {
    return false;
}

FLocString UInteractableComponent::GetLocString_Implementation() const {
    return FLocString{};
}

int32 UInteractableComponent::GetInteractState() const {
    return 0;
}

TArray<EInteractionType> UInteractableComponent::GetInteractions_Implementation(const FInteractionDescription& Description, float InteractDistance) const {
    return TArray<EInteractionType>();
}

EInteractionRestrictions UInteractableComponent::GetInteractionRestrictions_Implementation(AIndianaCharacter* Initiator) const {
    return EInteractionRestrictions::None;
}

float UInteractableComponent::GetInteractHoldTime_Implementation(const FInteractionDescription& Description) {
    return 0.0f;
}

EInteractionRestrictions UInteractableComponent::GetIgnoredInteractionRestrictions_Implementation() const {
    return EInteractionRestrictions::None;
}

FGameplayTag UInteractableComponent::GetGameplayTag_Implementation() const {
    return FGameplayTag{};
}

ETerminalLockState UInteractableComponent::GetCurrentTerminalState() {
    return ETerminalLockState::Hacked;
}

EOCLState UInteractableComponent::GetCurrentStateOCL() const {
    return EOCLState::Closed;
}

void UInteractableComponent::EnableInteractions() {
}

void UInteractableComponent::DisableInteractions() {
}

void UInteractableComponent::CompleteInteract_Implementation(const FInteractionDescription& Description) {
}

EOCLResult UInteractableComponent::CloseOCL(AActor* Initiator, bool Block, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation) {
    return EOCLResult::Success;
}

bool UInteractableComponent::CanInteract_Implementation(AIndianaCharacter* Initiator, const FInteractPayload& InteractPayload) const {
    return false;
}

void UInteractableComponent::CancelInteract_Implementation(const FInteractionDescription& Description) {
}

void UInteractableComponent::BarOCL(bool bFireOCLBarredEvent) {
}

bool UInteractableComponent::AreInteractionsEnabled() const {
    return false;
}


