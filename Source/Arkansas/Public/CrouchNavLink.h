#pragma once
#include "CoreMinimal.h"
#include "ReservableNavLink.h"
#include "CrouchNavLink.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_CrouchNavLink : public AReservableNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_CrouchNavLink(const FObjectInitializer& ObjectInitializer);

};

