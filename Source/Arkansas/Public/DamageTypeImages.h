#pragma once
#include "CoreMinimal.h"
#include "DamageTypeImages.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDamageTypeImages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImmuneTypeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* VulnerableTypeImage;
    
    ARKANSAS_API FDamageTypeImages();
};

