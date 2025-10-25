#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimInfo.h"
#include "WeaponAnimInfoArray.h"
#include "WeaponReloadAnimInfo.generated.h"

USTRUCT(BlueprintType)
struct FWeaponReloadAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAnimInfo> DefaultReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAnimInfo> EmptyReloadAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimInfoArray DefaultReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimInfoArray EmptyReload;
    
    ARKANSAS_API FWeaponReloadAnimInfo();
};

