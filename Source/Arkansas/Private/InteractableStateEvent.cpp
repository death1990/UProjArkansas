#include "InteractableStateEvent.h"

UInteractableStateEvent::UInteractableStateEvent() {
    this->InitialState = 0;
    this->bLinearRepeat = true;
    this->bExeuteOnStateTransition = false;
    this->bStopExeuteOnLoop = true;
}

void UInteractableStateEvent::SetState_BP(int32 NewStateIndex) {
}

void UInteractableStateEvent::SetLinearRepeat(bool bShouldLinearRepeat) {
}

void UInteractableStateEvent::ModifyInteractState(AActor* InteractableActor, int32 NewState) {
}

int32 UInteractableStateEvent::GetPreviousStateIndex() const {
    return 0;
}

int32 UInteractableStateEvent::GetCurrentStateIndex() const {
    return 0;
}


