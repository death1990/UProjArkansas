#pragma once
#include "CoreMinimal.h"
#include "WeaponModModeContainer.h"
#include "WeaponModModeContainerArrayFloat.generated.h"

USTRUCT(BlueprintType)
struct FWeaponModModeContainerArrayFloat : public FWeaponModModeContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FloatValues;
    
    ARKANSAS_API FWeaponModModeContainerArrayFloat();
};

