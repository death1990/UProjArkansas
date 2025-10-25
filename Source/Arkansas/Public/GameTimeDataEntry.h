#pragma once
#include "CoreMinimal.h"
#include "GameTimeDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FGameTimeDataEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Days;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
public:
    ARKANSAS_API FGameTimeDataEntry();
};

