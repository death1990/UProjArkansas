#pragma once
#include "CoreMinimal.h"
#include "EMeshTarget.h"
#include "WeaponAnimInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshTarget TargetMesh;
    
    ARKANSAS_API FWeaponAnimInfo();
};

