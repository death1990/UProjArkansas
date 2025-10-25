#include "OnKillListener.h"
#include "Templates/SubclassOf.h"

UOnKillListener::UOnKillListener() {
    this->bAllowInanimateObjects = false;
    this->bAsh = false;
    this->bStealthAttack = false;
    this->DamageFlags = EDamageFlags::None;
    this->DamageType = NULL;
    this->StatusEffect = NULL;
    this->bRespectPreventRevival = true;
}

void UOnKillListener::OnKillAsh(AActor* Killer, AActor* Victim, TSubclassOf<UIndianaDamageType> InDamageType, const FGameplayTag& InWeaponCategory) const {
}

void UOnKillListener::OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) const {
}


