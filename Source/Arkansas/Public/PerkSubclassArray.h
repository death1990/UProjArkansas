#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PerkSubclassArray.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkSubclassArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> Perks;
    
    ARKANSAS_API FPerkSubclassArray();
};

