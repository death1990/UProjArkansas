#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "AIProjectileLogicSubsystem.generated.h"

UCLASS(Blueprintable)
class UAIProjectileLogicSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UAIProjectileLogicSubsystem();

};

