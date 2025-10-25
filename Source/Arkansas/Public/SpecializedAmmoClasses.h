#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpecializedAmmoClasses.generated.h"

class UAmmo;

USTRUCT(BlueprintType)
struct FSpecializedAmmoClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAmmo>> Classes;
    
    ARKANSAS_API FSpecializedAmmoClasses();
};

