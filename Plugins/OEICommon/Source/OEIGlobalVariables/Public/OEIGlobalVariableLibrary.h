#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GlobalVariableReference.h"
#include "OEIGlobalVariableLibrary.generated.h"

UCLASS(Blueprintable)
class OEIGLOBALVARIABLES_API UOEIGlobalVariableLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIGlobalVariableLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalVariableReference MakeGlobalVariableReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalVariableID(const FGlobalVariableReference& Variable);
    
};

