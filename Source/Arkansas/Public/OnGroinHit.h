#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnGroinHit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnGroinHit : public UEventListener {
    GENERATED_BODY()
public:
    UOnGroinHit();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGroinHit();
    
};

