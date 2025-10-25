#pragma once
#include "CoreMinimal.h"
#include "OwCrowdAppearanceEyeColor.generated.h"

class UEyeColor;

USTRUCT(BlueprintType)
struct FOwCrowdAppearanceEyeColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEyeColor> EyeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FOwCrowdAppearanceEyeColor();
};

