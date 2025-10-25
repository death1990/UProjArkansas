#pragma once
#include "CoreMinimal.h"
#include "AIWeaponFiringSettings.h"
#include "EPriorityNodeValue.h"
#include "PriorityNodeFunctionLibrary.h"
#include "PriorityNodeHandle.h"
#include "AIWeaponFiringPriorityFunctionLibrary.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable)
class ARKANSAS_API UAIWeaponFiringPriorityFunctionLibrary : public UPriorityNodeFunctionLibrary {
    GENERATED_BODY()
public:
    UAIWeaponFiringPriorityFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle StopRangedAttackDelayed(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle StopFireWeapon(AIndianaAiController* Controller, EPriorityNodeValue Priority);
    
    UFUNCTION(BlueprintCallable)
    static FPriorityNodeHandle StartFireWeapon(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIWeaponFiringSettings AIWeaponFiringSettings);
    
};

