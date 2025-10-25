#include "OnPlayerRestrictedArea.h"

UOnPlayerRestrictedArea::UOnPlayerRestrictedArea() {
    this->EventType = ERestrictedAreaEventType::Enter;
}

void UOnPlayerRestrictedArea::OnRestrictedAreaEvent(const ARestrictedArea* RestrictedArea) {
}


