#include "InteractionEvent.h"

UInteractionEvent::UInteractionEvent() {
    this->bCanOnlyBeUsedOnce = false;
    this->bStartUsed = false;
    this->bRequiresFrontFacing = false;
    this->bRequiresBackFacing = false;
    this->bDisableCanOnlyUseOnceOnExecute = true;
}




