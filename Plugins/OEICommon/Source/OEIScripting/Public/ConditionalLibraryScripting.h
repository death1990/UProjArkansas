#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "ConditionalLibrary.h"
#include "ConditionalLibraryScripting.generated.h"

UCLASS(Blueprintable)
class OEISCRIPTING_API UConditionalLibraryScripting : public UConditionalLibrary {
    GENERATED_BODY()
public:
    UConditionalLibraryScripting();

    UFUNCTION(BlueprintCallable)
    static bool CallGlobalConditional(FGuid GlobalScriptID, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool AlwaysTrue();
    
    UFUNCTION(BlueprintCallable)
    static bool AlwaysFalse();
    
};

