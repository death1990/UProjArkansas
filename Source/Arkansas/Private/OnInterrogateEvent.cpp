#include "OnInterrogateEvent.h"

UOnInterrogateEvent::UOnInterrogateEvent() {
    this->InterrogateEventType = EInterrogateEventType::Start;
    this->bInterrogationPassed = true;
    this->Crime = ECrimeType::None;
}

void UOnInterrogateEvent::OnStartInterrogation() {
}

void UOnInterrogateEvent::OnEndInterrogation(EInterrogationResult InterrogationResult, AIndianaAiCharacter* Interrogator, ECrimeType InCrime, bool bInDisguised, int32 InDisguiseInterrogationsPassed) {
}


