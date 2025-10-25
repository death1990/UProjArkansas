#pragma once
#include "CoreMinimal.h"
#include "PerkTier.h"
#include "PerkTiers.generated.h"

USTRUCT(BlueprintType)
struct FPerkTiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkTier> PerkTiers;
    
    ARKANSAS_API FPerkTiers();
};

