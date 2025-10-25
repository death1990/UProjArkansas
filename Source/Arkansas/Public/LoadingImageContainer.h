#pragma once
#include "CoreMinimal.h"
#include "WeightedImageData.h"
#include "LoadingImageContainer.generated.h"

USTRUCT(BlueprintType)
struct FLoadingImageContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedImageData> LoadingImages;
    
public:
    ARKANSAS_API FLoadingImageContainer();
};

