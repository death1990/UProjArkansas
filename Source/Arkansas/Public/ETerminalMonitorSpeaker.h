#pragma once
#include "CoreMinimal.h"
#include "ETerminalMonitorSpeaker.generated.h"

UENUM(BlueprintType)
enum class ETerminalMonitorSpeaker : uint8 {
    MainMonitor,
    AltMonitor1,
    AltMonitor2,
    AltMonitor3,
    AltMonitor4,
    AltMonitor5,
};

