#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "AmmoItemDefinition.generated.h"

class UAmmo;

USTRUCT(BlueprintType)
struct FAmmoItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmo> AmmoClass;
    
    ARKANSAS_API FAmmoItemDefinition();
};

