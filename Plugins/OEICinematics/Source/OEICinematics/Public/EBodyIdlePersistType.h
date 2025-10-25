#pragma once
#include "CoreMinimal.h"
#include "EBodyIdlePersistType.generated.h"

UENUM(BlueprintType)
enum class EBodyIdlePersistType : uint8 {
    DoNotPersist,
    PersistForConversation,
    PersistAfterConversation,
};

