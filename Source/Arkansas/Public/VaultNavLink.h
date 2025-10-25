#pragma once
#include "CoreMinimal.h"
#include "ParkourNavLink.h"
#include "VaultNavLink.generated.h"

UCLASS(Blueprintable)
class ADEPRECATED_VaultNavLink : public ADEPRECATED_ParkourNavLink {
    GENERATED_BODY()
public:
    ADEPRECATED_VaultNavLink(const FObjectInitializer& ObjectInitializer);

};

