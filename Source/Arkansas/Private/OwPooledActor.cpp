#include "OwPooledActor.h"

AOwPooledActor::AOwPooledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPool = NULL;
}


