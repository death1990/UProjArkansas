#pragma once
#include "CoreMinimal.h"
#include "HeightValuesTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHeightValuesTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    ARKANSAS_API FHeightValuesTexture();
};

