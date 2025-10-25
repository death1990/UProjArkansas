#pragma once
#include "CoreMinimal.h"
#include "ReservableNavLink.h"
#include "DropDownNavLink.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_DropDownNavLink : public AReservableNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_DropDownNavLink(const FObjectInitializer& ObjectInitializer);

};

