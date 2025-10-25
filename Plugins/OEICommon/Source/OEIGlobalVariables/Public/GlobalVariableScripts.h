#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptLibrary -FallbackName=ScriptLibrary
#include "GlobalVariableScripts.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableScripts : public UScriptLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableScripts();

    UFUNCTION(BlueprintCallable)
    static void SetGlobalValue(FGuid Variable, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalIfGlobal(FGuid ConditionVariable, int32 ConditionValue, FGuid Variable, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeGlobalValueWithGlobals(FGuid Variable, FGuid MinValueGlobal, FGuid MaxValueGlobal);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeGlobalValue(FGuid Variable, int32 MinValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementGlobalValue(FGuid Variable, int32 IncrementValue);
    
};

