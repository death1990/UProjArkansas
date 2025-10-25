#pragma once
#include "CoreMinimal.h"
#include "PlaceableNavLink.h"
#include "HearingNavLink.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class AHearingNavLink : public APlaceableNavLink {
    GENERATED_BODY()
public:
    AHearingNavLink(const FObjectInitializer& ObjectInitializer);

};

