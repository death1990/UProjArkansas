#pragma once
#include "CoreMinimal.h"
#include "OwBaseTaskStreamingState.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOwBaseTaskStreamingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedAssets;
    
public:
    ARKANSAS_API FOwBaseTaskStreamingState();
};

