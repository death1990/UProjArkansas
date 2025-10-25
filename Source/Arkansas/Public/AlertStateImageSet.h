#pragma once
#include "CoreMinimal.h"
#include "AlertStateImageSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAlertStateImageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FillTexture;
    
    ARKANSAS_API FAlertStateImageSet();
};

