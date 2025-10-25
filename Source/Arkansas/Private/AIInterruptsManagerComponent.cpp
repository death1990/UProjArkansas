#include "AIInterruptsManagerComponent.h"

UAIInterruptsManagerComponent::UAIInterruptsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UAIInterruptsManagerComponent::K2_InterruptStopDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, bool bToOtherInterrupt) {
}

void UAIInterruptsManagerComponent::K2_InterruptStartDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, bool bFromOtherInterrupt) {
}

bool UAIInterruptsManagerComponent::K2_InterruptIsRunningDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller) {
    return false;
}

bool UAIInterruptsManagerComponent::K2_AddInterrupt_NoStop(AIndianaAiController* Controller, const EInterruptPriority Priority, const EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, const bool bDeactiveWhenDeprioritized, const bool bImmobilizeMovement, const bool bImmobilizeRootMotion, const bool bPauseBehaviorTask, const bool bPauseBehaviorTree, const bool bAllowGroupBehaviorParticipation, const bool bAllowWeaponFire, const bool bAllowOrientation, const FAIInterruptIsRunningScriptDelegate IsRunning, const FAIInterruptStartScriptDelegate Start) {
    return false;
}

bool UAIInterruptsManagerComponent::K2_AddInterrupt(AIndianaAiController* Controller, const EInterruptPriority Priority, const EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, const bool bDeactiveWhenDeprioritized, const bool bImmobilizeMovement, const bool bImmobilizeRootMotion, const bool bPauseBehaviorTask, const bool bPauseBehaviorTree, const bool bAllowGroupBehaviorParticipation, const bool bAllowWeaponFire, const bool bAllowOrientation, const FAIInterruptIsRunningScriptDelegate IsRunning, const FAIInterruptStartScriptDelegate Start, const FAIInterruptStopScriptDelegate Stop) {
    return false;
}


