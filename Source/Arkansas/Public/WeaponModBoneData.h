#pragma once
#include "CoreMinimal.h"
#include "BoneNameData.h"
#include "WeaponModBoneData.generated.h"

class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponMod> RequiredWeaponMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneNameData BoneData;
    
    ARKANSAS_API FWeaponModBoneData();
};

