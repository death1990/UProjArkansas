#pragma once
#include "CoreMinimal.h"
#include "BlueprintDefinedScriptLibrary.h"
#include "LogicalExpressionBlueprintFunctionLibrary.generated.h"

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API ULogicalExpressionBlueprintFunctionLibrary : public UBlueprintDefinedScriptLibrary {
    GENERATED_BODY()
public:
    ULogicalExpressionBlueprintFunctionLibrary();

};

