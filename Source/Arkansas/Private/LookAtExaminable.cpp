#include "LookAtExaminable.h"
#include "InteractLookAtTriggerComponent.h"

ALookAtExaminable::ALookAtExaminable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractLookAtTriggerComponent = CreateDefaultSubobject<UInteractLookAtTriggerComponent>(TEXT("InteractLookAtTrigger"));
}



