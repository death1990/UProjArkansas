#pragma once
#include "CoreMinimal.h"
#include "ESaveGameStorageProviderType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameStorageProviderType : uint8 {
    Invalid,
    FileSystem,
    GDK,
    PS5,
    Count,
};

