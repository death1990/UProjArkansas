#pragma once
#include "CoreMinimal.h"
#include "RadioPreferences.generated.h"

class URadioStationDataAsset;

USTRUCT(BlueprintType)
struct FRadioPreferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRadioStartsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadioStationDataAsset* StartingStation;
    
    ARKANSAS_API FRadioPreferences();
};

