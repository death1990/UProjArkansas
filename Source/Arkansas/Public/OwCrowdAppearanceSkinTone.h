#pragma once
#include "CoreMinimal.h"
#include "OwCrowdAppearanceSkinTone.generated.h"

class USkinTone;

USTRUCT(BlueprintType)
struct FOwCrowdAppearanceSkinTone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkinTone> SkinTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FOwCrowdAppearanceSkinTone();
};

