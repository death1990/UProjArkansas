#include "RandomPlayerSequenceEntryNamed.h"

FRandomPlayerSequenceEntryNamed::FRandomPlayerSequenceEntryNamed() {
    this->Sequence = NULL;
    this->ChanceToPlay = 0.00f;
    this->MinLoopCount = 0;
    this->MaxLoopCount = 0;
    this->MinPlayRate = 0.00f;
    this->MaxPlayRate = 0.00f;
    this->bMustPlayFromBeginning = false;
    this->bIgnoreForInitialAnimation = false;
    this->bIgnoreIfHelmetIsVisible = false;
    this->bIgnoreIfWithinTalkRange = false;
    this->bIgnoreIfOutsideOfTalkRange = false;
}

