#include "TacticalTimeDilationComponent.h"

UTacticalTimeDilationComponent::UTacticalTimeDilationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeDilation = 0.05f;
    this->PlayerTimeDilation = 0.10f;
    this->TimeDilationMeterMax = 100.00f;
    this->TimeDilationDrainRate = 0.03f;
    this->TimeDilationFillRate = 0.02f;
    this->TimeDilationFillDelay = 3.00f;
    this->InCombatFillRate = 0.02f;
    this->InCombatFillDelay = 3.00f;
    this->TimeDilationDrainRateAction = 10.00f;
    this->TimeDilationDrainRateMovement = 10.00f;
    this->TransitionTime = 0.50f;
    this->TimeDilationStat = NULL;
    this->ReloadScalar = 0.50f;
    this->RechamberScalar = 0.50f;
    this->LookRateScalar = 2.00f;
    this->TTDMeterDepleted = NULL;
    this->TTDDeactivated = NULL;
    this->TTDUsuable = NULL;
    this->TTDMeterFull = NULL;
    this->MovementAudioDrainRate = 0.10f;
    this->TimeDilationActionDuration = 1.00f;
    this->TimeDilationMovementDuration = 1.00f;
}

void UTacticalTimeDilationComponent::SetEnergyPercent(float Percent) {
}

void UTacticalTimeDilationComponent::PreventTTD(bool bPrevent) {
}

void UTacticalTimeDilationComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UTacticalTimeDilationComponent::OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered) {
}

void UTacticalTimeDilationComponent::OnGadgetEquipped(const UGadget* Gadget) {
}

void UTacticalTimeDilationComponent::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

bool UTacticalTimeDilationComponent::IsTTDActive() const {
    return false;
}

float UTacticalTimeDilationComponent::GetMeterRefillScalar() const {
    return 0.0f;
}

float UTacticalTimeDilationComponent::GetMeterMax() const {
    return 0.0f;
}

float UTacticalTimeDilationComponent::GetMeter() const {
    return 0.0f;
}

void UTacticalTimeDilationComponent::EnableTimeDilation(bool bEnabled, bool bInstant, bool bForce) {
}

void UTacticalTimeDilationComponent::AttributeUpdated(EAttribute Attribute, int32 NewValue) {
}

void UTacticalTimeDilationComponent::AdjustTimeDilationMeter(float Adjustment) {
}


