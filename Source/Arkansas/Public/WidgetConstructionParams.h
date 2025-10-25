#pragma once
#include "CoreMinimal.h"
#include "ActivationParams.h"
#include "WidgetConstructionParams.generated.h"

USTRUCT(BlueprintType)
struct FWidgetConstructionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivationParams ActivationParams;
    
    ARKANSAS_API FWidgetConstructionParams();
};

