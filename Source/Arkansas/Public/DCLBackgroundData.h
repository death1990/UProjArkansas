#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DCLBackgroundData.generated.h"

class UAptitude;

USTRUCT(BlueprintType)
struct FDCLBackgroundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAptitude> Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEmptyBackground;
    
    ARKANSAS_API FDCLBackgroundData();
};

