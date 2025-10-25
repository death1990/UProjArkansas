#include "AIGroupBehavior_SequencerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlayer -FallbackName=LevelSequencePlayer

UAIGroupBehavior_SequencerBase::UAIGroupBehavior_SequencerBase() {
    this->bEnableContinuousCooking = false;
    this->LevelSequenceAsset = NULL;
    this->SequencePlayer = CreateDefaultSubobject<ULevelSequencePlayer>(TEXT("AnimationPlayer"));
    this->bEnableAutoRole = false;
}

void UAIGroupBehavior_SequencerBase::StopSequence() {
}

void UAIGroupBehavior_SequencerBase::StartSequence() {
}



void UAIGroupBehavior_SequencerBase::Internal_OnSequenceStop() {
}

void UAIGroupBehavior_SequencerBase::Internal_OnSequenceFinished() {
}

ULevelSequencePlayer* UAIGroupBehavior_SequencerBase::GetSequencePlayer() const {
    return NULL;
}


