#pragma once
#include "CoreMinimal.h"
#include "EToxicityCrashEventType.generated.h"

UENUM(BlueprintType)
enum class EToxicityCrashEventType : uint8 {
    ToxicityCrashStart,
    ToxicityCrashEnd,
};

