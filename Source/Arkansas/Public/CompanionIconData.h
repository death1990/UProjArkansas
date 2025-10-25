#pragma once
#include "CoreMinimal.h"
#include "CompanionIconData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCompanionIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HealthyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DeadTexture;
    
    ARKANSAS_API FCompanionIconData();
};

