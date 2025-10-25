#pragma once
#include "CoreMinimal.h"
#include "InputLabelDisplay.generated.h"

USTRUCT(BlueprintType)
struct FInputLabelDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInputLabelSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowForKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowForGamepad;
    
    ARKANSAS_API FInputLabelDisplay();
};

