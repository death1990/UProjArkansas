#pragma once
#include "CoreMinimal.h"
#include "EWeatherSystemEditorTickOptions.generated.h"

UENUM(BlueprintType)
enum EWeatherSystemEditorTickOptions {
    eWeatherSystemEditorTick_Disabled,
    eWeatherSystemEditorTick_Paused,
    eWeatherSystemEditorTick_Enabled,
};

