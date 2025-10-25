#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "InteractableManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UInteractableManagerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UInteractableManagerSubsystem();

};

