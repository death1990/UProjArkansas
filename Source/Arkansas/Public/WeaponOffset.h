#pragma once
#include "CoreMinimal.h"
#include "CameraPositionOffset.h"
#include "WeaponOffset.generated.h"

class UWeapon;
class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UWeapon>> WeaponClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UWeaponMod>> WeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraPositionOffset CameraPositionOffsets;
    
    ARKANSAS_API FWeaponOffset();
};

