#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AI_UObject.generated.h"

UCLASS(Abstract, Blueprintable)
class UAI_UObject : public UObject {
    GENERATED_BODY()
public:
    UAI_UObject();

};

