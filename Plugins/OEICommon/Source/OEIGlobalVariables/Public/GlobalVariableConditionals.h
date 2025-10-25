#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ConditionalLibrary -FallbackName=ConditionalLibrary
#include "GlobalVariableConditionals.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UGlobalVariableConditionals : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UGlobalVariableConditionals();

    UFUNCTION(BlueprintCallable)
    static bool IsGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareGlobals(FGuid Variable1, EComparisonOperator Operator, FGuid Variable2);
    
};

