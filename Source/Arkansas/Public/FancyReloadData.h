#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimInfoArray.h"
#include "WeaponReloadAnimInfo.h"
#include "FancyReloadData.generated.h"

USTRUCT(BlueprintType)
struct FFancyReloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadAnimInfo MagazineReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadAnimInfo RepeatingReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FWeaponAnimInfoArray> BreakActionReloadAnims;
    
    ARKANSAS_API FFancyReloadData();
};

