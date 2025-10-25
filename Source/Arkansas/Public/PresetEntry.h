#pragma once
#include "CoreMinimal.h"
#include "PresetEntry.generated.h"

USTRUCT(BlueprintType)
struct FPresetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PresetDescription;
    
    ARKANSAS_API FPresetEntry();
};

