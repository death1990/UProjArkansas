#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnBitsSpent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnBitsSpent : public UEventListener {
    GENERATED_BODY()
public:
    UOnBitsSpent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnBitsSpent(int32 NumBits);
    
};

