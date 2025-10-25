#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIInt.generated.h"

UCLASS(Abstract, Blueprintable)
class UAIInt : public UObject {
    GENERATED_BODY()
public:
    UAIInt();

};

