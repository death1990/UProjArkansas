#include "AutoStasisTrigger.h"

AAutoStasisTrigger::AAutoStasisTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
}


