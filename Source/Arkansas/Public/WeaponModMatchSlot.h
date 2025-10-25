#pragma once
#include "CoreMinimal.h"
#include "EWeaponModMatch.h"
#include "WeaponModMatchSlot.generated.h"

class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModMatchSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponModMatch MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UWeaponMod>> MatchingMods;
    
    ARKANSAS_API FWeaponModMatchSlot();
};

