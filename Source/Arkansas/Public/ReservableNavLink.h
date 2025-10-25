#pragma once
#include "CoreMinimal.h"
#include "PlaceableNavLink.h"
#include "ReservableNavLink.generated.h"

UCLASS(Blueprintable)
class AReservableNavLink : public APlaceableNavLink {
    GENERATED_BODY()
public:
    AReservableNavLink(const FObjectInitializer& ObjectInitializer);

};

