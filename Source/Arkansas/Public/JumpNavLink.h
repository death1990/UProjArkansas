#pragma once
#include "CoreMinimal.h"
#include "ReservableNavLink.h"
#include "JumpNavLink.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_JumpNavLink : public AReservableNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_JumpNavLink(const FObjectInitializer& ObjectInitializer);

};

