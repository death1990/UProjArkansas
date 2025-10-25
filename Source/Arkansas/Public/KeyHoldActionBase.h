#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "KeyHoldActionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UKeyHoldActionBase : public UObject {
    GENERATED_BODY()
public:
    UKeyHoldActionBase();

};

