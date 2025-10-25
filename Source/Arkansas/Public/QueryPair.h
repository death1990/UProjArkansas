#pragma once
#include "CoreMinimal.h"
#include "QueryPair.generated.h"

class UEQSRequest_IndianaBase;

USTRUCT(BlueprintType)
struct FQueryPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEQSRequest_IndianaBase* EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FQueryPair();
};

