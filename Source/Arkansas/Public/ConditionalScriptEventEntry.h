#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "ConditionalScriptEventEntry.generated.h"

class UGenericLogicDataAsset;
class UScriptEvent;

USTRUCT(BlueprintType)
struct FConditionalScriptEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericLogicDataAsset* LogicDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression LogicalExpression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScriptEvent*> ScriptEventArray;
    
    ARKANSAS_API FConditionalScriptEventEntry();
};

