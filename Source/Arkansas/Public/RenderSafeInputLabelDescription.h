#pragma once
#include "CoreMinimal.h"
#include "InputLabelDescription.h"
#include "RenderSafeInputLabelDescription.generated.h"

USTRUCT(BlueprintType)
struct FRenderSafeInputLabelDescription : public FInputLabelDescription {
    GENERATED_BODY()
public:
    ARKANSAS_API FRenderSafeInputLabelDescription();
};

