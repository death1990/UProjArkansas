#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GlobalScriptReference.h"
#include "ScriptLibrary.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalScriptReference MakeGlobalScriptReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalScriptID(const FGlobalScriptReference& GlobalScript);
    
};

