#include "FastTravelRestrictionVolume.h"

AFastTravelRestrictionVolume::AFastTravelRestrictionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInvertConditions = false;
}

void AFastTravelRestrictionVolume::OnEvaluateFastTravel() {
}


