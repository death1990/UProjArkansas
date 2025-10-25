#include "IgnoreForcePerspectiveTriggerBox.h"

AIgnoreForcePerspectiveTriggerBox::AIgnoreForcePerspectiveTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlagToIgnore = EForcedFirstPersonFlag::Invalid;
}


