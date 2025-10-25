#include "BTDecorator_IsDying.h"

UBTDecorator_IsDying::UBTDecorator_IsDying() {
    this->NodeName = TEXT("Is Dying");
    this->FlowAbortMode = EBTFlowAbortMode::Both;
    this->bIncludeDeadState = true;
    this->bIncludeDownState = false;
    this->bIncludeCompanions = false;
    this->bIncludeBeingRevived = false;
}


