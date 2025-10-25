#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimInfoArray.h"
#include "WeaponModMatchData.h"
#include "WeaponReloadAnimInfo.h"
#include "ModMatchReloadData.generated.h"

USTRUCT(BlueprintType)
struct FModMatchReloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadAnimInfo MagazineReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadAnimInfo RepeatingReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FWeaponAnimInfoArray> BreakActionReloadAnims;
    
    ARKANSAS_API FModMatchReloadData();
};

