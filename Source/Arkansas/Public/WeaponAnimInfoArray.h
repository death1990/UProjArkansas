#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimInfo.h"
#include "WeaponAnimInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAnimInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponAnimInfo> WeaponAnims;
    
    ARKANSAS_API FWeaponAnimInfoArray();
};

