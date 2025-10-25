#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIActor.generated.h"

UCLASS(Abstract, Blueprintable)
class UAIActor : public UObject {
    GENERATED_BODY()
public:
    UAIActor();

};

