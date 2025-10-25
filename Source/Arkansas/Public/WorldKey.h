#pragma once
#include "CoreMinimal.h"
#include "WorldKey.generated.h"

USTRUCT(BlueprintType)
struct FWorldKey {
    GENERATED_BODY()
public:
    ARKANSAS_API FWorldKey();
};
FORCEINLINE uint32 GetTypeHash(const FWorldKey) { return 0; }

