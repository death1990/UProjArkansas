#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnArmorModChargeRepulsorDamageCaused.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnArmorModChargeRepulsorDamageCaused : public UEventListener {
    GENERATED_BODY()
public:
    UOnArmorModChargeRepulsorDamageCaused();

protected:
    UFUNCTION(BlueprintCallable)
    void OnArmorModChargeRepulsorDamageCaused();
    
};

