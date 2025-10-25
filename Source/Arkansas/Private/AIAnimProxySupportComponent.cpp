#include "AIAnimProxySupportComponent.h"

UAIAnimProxySupportComponent::UAIAnimProxySupportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIAnimProxySupportComponent::OnUnequipWeaponResult(bool bResult) {
}

void UAIAnimProxySupportComponent::OnTargetAwarenessUpdate(AActor* Target, AActor* StimulusSource, EStimulusType StimulusType, const FAIStimulus& Stimulus, EAlertState BeforeAlertState, EAlertState AfterAlertState, float BeforeAwareness, float AfterAwareness) {
}

void UAIAnimProxySupportComponent::OnMoveToAnimProxyResult(bool bResult) {
}

void UAIAnimProxySupportComponent::OnEquipWeaponResult(bool bResult) {
}

void UAIAnimProxySupportComponent::OnAssignedToStageMark(AIndianaCharacter* Character, AStageMarkActor* StageMark) {
}

void UAIAnimProxySupportComponent::InterruptCurrentAnimProxy(const EProxyTaskInterruptType InterruptReason, bool bCleanUpImmediately) {
}

AAnimationProxyActor* UAIAnimProxySupportComponent::GetCurrentAnimationProxyActor() const {
    return NULL;
}


