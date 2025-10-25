#include "AIOutOfCombatLogicComponent.h"

UAIOutOfCombatLogicComponent::UAIOutOfCombatLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuspiciousPlayerActionInterruptTime = 5.00f;
    this->SuspiciousPlayerActionInterruptRepeatingChatterIntervalMin = 15.00f;
    this->SuspiciousPlayerActionInterruptRepeatingChatterIntervalMax = 20.00f;
    this->SuspiciousPlayerActionInterruptCrouchingSeenTime = 1.00f;
    this->SuspiciousPlayerActionInterruptFriendlyFineAimSeenTime = 1.00f;
    this->TargetSharingDelay = 2.00f;
}

void UAIOutOfCombatLogicComponent::OnAlertStateChange(AActor* TargetActor, EAlertState OldAlertState, EAlertState NewAlertState, bool bRestoring) {
}

float UAIOutOfCombatLogicComponent::GetTargetSharingDelay() const {
    return 0.0f;
}

FAIOrientationControl UAIOutOfCombatLogicComponent::GetSuspiciousPlayerActionInterruptOrientationControl() {
    return FAIOrientationControl{};
}


