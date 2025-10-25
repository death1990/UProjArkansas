#pragma once
#include "CoreMinimal.h"
#include "OwCrowdAppearanceLayer.generated.h"

class UDirt;
class UMakeup;
class UMole;
class UScar;

USTRUCT(BlueprintType)
struct FOwCrowdAppearanceLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UScar> Scar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMole> Mole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDirt> Dirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMakeup> Makeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FOwCrowdAppearanceLayer();
};

