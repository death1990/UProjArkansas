#include "AIPriorityStatusEffect.h"

UAIPriorityStatusEffect::UAIPriorityStatusEffect() {
    this->Priority = EPriorityNodeValue::Lowest;
}

void UAIPriorityStatusEffect::ReceiveClearEffectAIPriority_Implementation(AIndianaAiCharacter* AffectedCharacter, AIndianaAiController* AffectedController, FPriorityNodeHandle& Handle) const {
}

void UAIPriorityStatusEffect::ReceiveApplyEffectAIPriority_Implementation(AIndianaAiCharacter* AffectedCharacter, AIndianaAiController* AffectedController, FPriorityNodeHandle& Handle, AActor* Origin, float Ratio, bool bRestoredFromSave) const {
}


