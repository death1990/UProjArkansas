#include "OnBlock.h"

UOnBlock::UOnBlock() {
    this->BlockEventType = EBlockEventType::BlockStart;
}

void UOnBlock::OnPerfectBlockEvent(AActor* Blocker, AIndianaCharacter* Attacker) const {
}

void UOnBlock::OnBlockHitEvent(AActor* Blocker, AActor* Attacker, bool bIsMeleeHit) {
}

void UOnBlock::OnBlockEvent(AActor* Blocker, bool bSkipAnimation) {
}


