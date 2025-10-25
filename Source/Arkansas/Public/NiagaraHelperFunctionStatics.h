#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NiagaraSystemParams.h"
#include "NiagaraHelperFunctionStatics.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class UNiagaraHelperFunctionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraHelperFunctionStatics();

    UFUNCTION(BlueprintCallable)
    static void SetNiagaraSystemParams(UNiagaraComponent* NiagaraComponent, const TArray<FNiagaraSystemParams>& Params);
    
};

