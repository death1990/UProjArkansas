#include "OnKilled.h"

UOnKilled::UOnKilled() {
    this->bRespectPreventRevival = true;
    this->DamageFlags = EDamageFlags::None;
}

void UOnKilled::OnKilled(UHealthComponent* HealthComponent, FCauseDamageInfo CDI) {
}


