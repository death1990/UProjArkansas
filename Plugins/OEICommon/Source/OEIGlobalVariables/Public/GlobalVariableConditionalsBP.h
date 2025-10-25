#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "GlobalVariableConditionalsBP.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableConditionalsBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableConditionalsBP();

    UFUNCTION(BlueprintCallable)
    static bool IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalValue(FGuid Variable);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2, EBoolResult& OutResult);
    
};

