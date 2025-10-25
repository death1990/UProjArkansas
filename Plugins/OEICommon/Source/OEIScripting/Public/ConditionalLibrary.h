#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GlobalConditionalReference.h"
#include "ConditionalLibrary.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UConditionalLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConditionalLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGlobalConditionalReference MakeGlobalConditionalReference(FGuid ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetGlobalConditionalID(const FGlobalConditionalReference& GlobalConditional);
    
};

