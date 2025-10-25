#pragma once
#include "CoreMinimal.h"
#include "FootRanges.generated.h"

USTRUCT(BlueprintType)
struct FFootRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownDistance;
    
    ARKANSAS_API FFootRanges();
};

