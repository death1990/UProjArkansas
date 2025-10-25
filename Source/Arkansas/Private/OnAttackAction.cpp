#include "OnAttackAction.h"

UOnAttackAction::UOnAttackAction() {
    this->EventType = EAttackActionEventType::MeleeStart;
    this->MeleeAction = EMeleeAction::Invalid;
    this->FireMode = EFireMode::None;
}

void UOnAttackAction::OnMeleeAction(AActor* Attacker, EMeleeAction ActionStarted) const {
}

void UOnAttackAction::OnAttackComplete(AActor* Attacker, int32 AttackID, bool bIsQuickMelee) {
}


