#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PerkTier.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FPerkTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousPointsRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumLevelRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> Perks;
    
    ARKANSAS_API FPerkTier();
};

