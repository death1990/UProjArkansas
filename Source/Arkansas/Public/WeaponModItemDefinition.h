#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "WeaponModItemDefinition.generated.h"

class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponModItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponMod> WeaponModClass;
    
    ARKANSAS_API FWeaponModItemDefinition();
};

