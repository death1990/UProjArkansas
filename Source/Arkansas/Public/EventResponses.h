#pragma once
#include "CoreMinimal.h"
#include "EventResponse.h"
#include "EventResponses.generated.h"

USTRUCT(BlueprintType)
struct FEventResponses {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventResponse> EventResponses;
    
public:
    ARKANSAS_API FEventResponses();
};

