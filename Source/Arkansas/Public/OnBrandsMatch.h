#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnBrandsMatch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnBrandsMatch : public UEventListener {
    GENERATED_BODY()
public:
    UOnBrandsMatch();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBrandsMatch();
    
};

