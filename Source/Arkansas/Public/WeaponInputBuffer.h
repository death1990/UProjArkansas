#pragma once
#include "CoreMinimal.h"
#include "WeaponInputBuffer.generated.h"

USTRUCT(BlueprintType)
struct FWeaponInputBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindowTime;
    
    ARKANSAS_API FWeaponInputBuffer();
};

