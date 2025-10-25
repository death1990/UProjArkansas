#include "FPVAnimProxyEvent.h"

UFPVAnimProxyEvent::UFPVAnimProxyEvent() {
    this->bDisableCanOnlyUseOnceOnExecute = false;
    this->PropMesh = NULL;
    this->InteractableAnimSequence = NULL;
    this->LoopInteractableAnimSequence = false;
    this->bInstantAnimate = true;
}

void UFPVAnimProxyEvent::OnAnimProxyComplete() {
}


