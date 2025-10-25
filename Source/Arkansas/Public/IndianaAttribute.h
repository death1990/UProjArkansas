#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IndianaAttribute.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class UIndianaAttribute : public UObject {
    GENERATED_BODY()
public:
    UIndianaAttribute();

};

