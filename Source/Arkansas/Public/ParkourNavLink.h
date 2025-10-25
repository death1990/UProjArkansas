#pragma once
#include "CoreMinimal.h"
#include "ReservableNavLink.h"
#include "ParkourNavLink.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_ParkourNavLink : public AReservableNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_ParkourNavLink(const FObjectInitializer& ObjectInitializer);

};

