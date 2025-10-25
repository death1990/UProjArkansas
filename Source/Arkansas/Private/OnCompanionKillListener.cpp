#include "OnCompanionKillListener.h"

UOnCompanionKillListener::UOnCompanionKillListener() {
    this->bAllowInanimateObjects = false;
}

void UOnCompanionKillListener::OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}


