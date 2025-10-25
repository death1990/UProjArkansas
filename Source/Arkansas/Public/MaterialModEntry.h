#pragma once
#include "CoreMinimal.h"
#include "MaterialModEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialModEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialToUse;
    
    ARKANSAS_API FMaterialModEntry();
};

