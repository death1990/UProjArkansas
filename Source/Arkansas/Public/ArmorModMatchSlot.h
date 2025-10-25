#pragma once
#include "CoreMinimal.h"
#include "EWeaponModMatch.h"
#include "ArmorModMatchSlot.generated.h"

class UArmorModItem;

USTRUCT(BlueprintType)
struct FArmorModMatchSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponModMatch MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UArmorModItem>> MatchingMods;
    
    ARKANSAS_API FArmorModMatchSlot();
};

