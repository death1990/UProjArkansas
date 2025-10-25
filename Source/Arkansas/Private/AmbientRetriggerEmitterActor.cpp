#include "AmbientRetriggerEmitterActor.h"
#include "AmbientRetriggerEmitterComponent.h"

AAmbientRetriggerEmitterActor::AAmbientRetriggerEmitterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmitterComponent = CreateDefaultSubobject<UAmbientRetriggerEmitterComponent>(TEXT("EmitterComponent"));
}


