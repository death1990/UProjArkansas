#pragma once
#include "CoreMinimal.h"
#include "WeaponModMatchSlot.h"
#include "WeaponModMatchData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponModMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot Barrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot Magazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot Sight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot UnderBarrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchSlot Grip;
    
    ARKANSAS_API FWeaponModMatchData();
};

