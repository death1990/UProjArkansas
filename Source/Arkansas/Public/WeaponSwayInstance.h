#pragma once
#include "CoreMinimal.h"
#include "WeaponSwayInstance.generated.h"

class UWeaponCameraSwayData;

USTRUCT(BlueprintType)
struct FWeaponSwayInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponCameraSwayData* SwayData;
    
public:
    ARKANSAS_API FWeaponSwayInstance();
};

