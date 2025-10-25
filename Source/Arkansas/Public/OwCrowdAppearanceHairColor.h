#pragma once
#include "CoreMinimal.h"
#include "OwCrowdAppearanceHairColor.generated.h"

class UBeardColor;
class UEyebrowColor;
class UHairColor;

USTRUCT(BlueprintType)
struct FOwCrowdAppearanceHairColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHairColor> HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBeardColor> BeardColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEyebrowColor> EyebrowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FOwCrowdAppearanceHairColor();
};

