#include "OnTactialTimeDilation.h"

UOnTactialTimeDilation::UOnTactialTimeDilation() {
    this->EventType = ETacticalTimeDilationEventType::Start;
    this->bOneAtEnd = true;
}

void UOnTactialTimeDilation::OnTacticalTimeDilationStart() {
}

void UOnTactialTimeDilation::OnTacticalTimeDilationEnd(float Duration) {
}


