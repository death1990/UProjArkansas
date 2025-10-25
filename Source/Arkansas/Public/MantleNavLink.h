#pragma once
#include "CoreMinimal.h"
#include "ParkourNavLink.h"
#include "MantleNavLink.generated.h"

UCLASS(Blueprintable)
class ADEPRECATED_MantleNavLink : public ADEPRECATED_ParkourNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_MantleNavLink(const FObjectInitializer& ObjectInitializer);

};

