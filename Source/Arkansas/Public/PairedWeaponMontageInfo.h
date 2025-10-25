#pragma once
#include "CoreMinimal.h"
#include "PairedWeaponMontageInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPairedWeaponMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    ARKANSAS_API FPairedWeaponMontageInfo();
};

