#pragma once
#include "CoreMinimal.h"
#include "AmmoTypeDisplay.generated.h"

class UAmmo;

USTRUCT(BlueprintType)
struct FAmmoTypeDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAmmo* AmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideWhenZero;
    
    ARKANSAS_API FAmmoTypeDisplay();
};

