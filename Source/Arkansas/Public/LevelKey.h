#pragma once
#include "CoreMinimal.h"
#include "LevelKey.generated.h"

USTRUCT(BlueprintType)
struct FLevelKey {
    GENERATED_BODY()
public:
    ARKANSAS_API FLevelKey();
};
FORCEINLINE uint32 GetTypeHash(const FLevelKey) { return 0; }

