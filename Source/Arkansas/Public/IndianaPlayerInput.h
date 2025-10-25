#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
#include "IndianaPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class UIndianaPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UIndianaPlayerInput();

};

