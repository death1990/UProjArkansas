#pragma once
#include "CoreMinimal.h"
#include "OEITooltipData.h"
#include "OEITooltipDataArray.generated.h"

USTRUCT(BlueprintType)
struct OEITEXT_API FOEITooltipDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEITooltipData> Data;
    
    FOEITooltipDataArray();
};

