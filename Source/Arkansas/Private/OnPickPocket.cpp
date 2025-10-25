#include "OnPickPocket.h"

UOnPickPocket::UOnPickPocket() {
    this->PickpocketEventType = EPickpocketEventType::Start;
}

void UOnPickPocket::OnPickPocket(AActor* Pickpocketer, AActor* Target) const {
}


