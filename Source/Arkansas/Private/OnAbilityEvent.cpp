#include "OnAbilityEvent.h"

UOnAbilityEvent::UOnAbilityEvent() {
    this->EventType = EAbilityEventType::Instant;
    this->Identifier = 0;
}

void UOnAbilityEvent::OnAbilityEvent(AIndianaAiCharacter* InCaster, EAbilityEventType InEventType, int32 InIdentifier) {
}


