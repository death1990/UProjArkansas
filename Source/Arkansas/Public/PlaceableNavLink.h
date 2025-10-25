#pragma once
#include "CoreMinimal.h"
#include "IndianaNavLink.h"
#include "PlaceableNavLink.generated.h"

UCLASS(Blueprintable)
class APlaceableNavLink : public AIndianaNavLink {
    GENERATED_BODY()
public:
    APlaceableNavLink(const FObjectInitializer& ObjectInitializer);

};

