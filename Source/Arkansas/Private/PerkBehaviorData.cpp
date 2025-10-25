#include "PerkBehaviorData.h"

UPerkBehaviorData::UPerkBehaviorData() {
    this->Perk = NULL;
    this->bHasCooldownBetweenActivations = false;
    this->Cooldown = -1.00f;
    this->TimeInCombatBeforePerkCanActivate = 10.00f;
}

bool UPerkBehaviorData::ReceiveEvaluatePerk_Implementation(ACharacter* PerkUser) {
    return false;
}

bool UPerkBehaviorData::EvaluatePerk(ACharacter* PerkUser) {
    return false;
}


