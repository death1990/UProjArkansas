#pragma once
#include "CoreMinimal.h"
#include "GamepadBindings.h"
#include "GamepadBindingsList.generated.h"

USTRUCT(BlueprintType)
struct FGamepadBindingsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamepadBindings> Bindings;
    
    ARKANSAS_API FGamepadBindingsList();
};

