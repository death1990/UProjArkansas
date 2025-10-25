#pragma once
#include "CoreMinimal.h"
#include "EWeaponModeContainerType.h"
#include "WeaponModModeContainer.generated.h"

USTRUCT(BlueprintType)
struct FWeaponModModeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponModeContainerType WeaponModeSelection;
    
    ARKANSAS_API FWeaponModModeContainer();
};

