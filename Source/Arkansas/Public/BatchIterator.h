#pragma once
#include "CoreMinimal.h"
#include "BatchIterator.generated.h"

USTRUCT(BlueprintType)
struct FBatchIterator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCountPerBatch;
    
    ARKANSAS_API FBatchIterator();
};

