#include "OWLevelSequenceActor.h"

AOWLevelSequenceActor::AOWLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUnloadDataLayerWhenFinished = false;
}

void AOWLevelSequenceActor::OnSequenceFinished() {
}


