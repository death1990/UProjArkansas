#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnArmageddonKill.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnArmageddonKill : public UEventListener {
    GENERATED_BODY()
public:
    UOnArmageddonKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnArmageddonKill() const;
    
};

