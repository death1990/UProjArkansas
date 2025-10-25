#pragma once
#include "CoreMinimal.h"
#include "WeaponModAnimOverrideInfo.generated.h"

class UAnimSequence;
class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModAnimOverrideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponMod> WeaponMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    ARKANSAS_API FWeaponModAnimOverrideInfo();
};

