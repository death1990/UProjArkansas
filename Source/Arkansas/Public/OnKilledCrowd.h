#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnKilledCrowd.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnKilledCrowd : public UEventListener {
    GENERATED_BODY()
public:
    UOnKilledCrowd();

protected:
    UFUNCTION(BlueprintCallable)
    void OnKilledCrowd() const;
    
};

