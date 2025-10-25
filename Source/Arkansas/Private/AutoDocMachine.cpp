#include "AutoDocMachine.h"

AAutoDocMachine::AAutoDocMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInfiniteUse = false;
}

void AAutoDocMachine::OnAnimProxySkipped(AIndianaPlayerCharacter* PlayerCharacter, const FGameplayTag& SkippedAnimProxyKey) {
}

bool AAutoDocMachine::GetPassesConditionals(EInteractionType InteractionType) {
    return false;
}


