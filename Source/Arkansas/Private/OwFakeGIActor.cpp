#include "OwFakeGIActor.h"

AOwFakeGIActor::AOwFakeGIActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableTODColorCurve = false;
    this->bEnableTODIntensityCurve = false;
    this->bFakeGILightVisibleInReflectionCaptures = false;
}


