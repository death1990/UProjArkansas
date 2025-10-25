#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnSharpDressed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSharpDressed : public UEventListener {
    GENERATED_BODY()
public:
    UOnSharpDressed();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSharpDressed();
    
};

