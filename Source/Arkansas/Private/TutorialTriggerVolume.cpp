#include "TutorialTriggerVolume.h"

ATutorialTriggerVolume::ATutorialTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bMarkTutorialCompleteTrigger = false;
}


