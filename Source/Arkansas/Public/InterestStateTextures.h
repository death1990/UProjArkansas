#pragma once
#include "CoreMinimal.h"
#include "InterestStateTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInterestStateTextures {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DiscoveredTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnknownTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MentionedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIconScalar;
    
public:
    ARKANSAS_API FInterestStateTextures();
};

