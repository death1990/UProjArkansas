#pragma once
#include "CoreMinimal.h"
#include "PerkTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPerkTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Unpurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Purchased;
    
    ARKANSAS_API FPerkTextures();
};

