#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDataLayerRuntimeState -FallbackName=EDataLayerRuntimeState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "ActorStreamingSafeguardSubsystem.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable)
class ARKANSAS_API UActorStreamingSafeguardSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UActorStreamingSafeguardSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDataLayerRuntimeStateChanged(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
};

