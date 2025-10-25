#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AI_AIAction.generated.h"

UCLASS(Abstract, Blueprintable)
class UAI_AIAction : public UObject {
    GENERATED_BODY()
public:
    UAI_AIAction();

};

