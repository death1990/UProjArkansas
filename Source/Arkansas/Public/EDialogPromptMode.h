#pragma once
#include "CoreMinimal.h"
#include "EDialogPromptMode.generated.h"

UENUM(BlueprintType)
enum class EDialogPromptMode : uint8 {
    AcceptCancel,
    ContinueCancel,
    YesNo,
    ConfirmBack,
    KeepRevert,
    MultiOption,
    BlockingModal,
};

