#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "InteractableActor.h"
#include "RPGInteractableRequirements.h"
#include "ElevatorSwitch.generated.h"

UCLASS(Blueprintable)
class AElevatorSwitch : public AInteractableActor {
    GENERATED_BODY()
public:
    AElevatorSwitch(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool PassesRPGRequirements(uint8 InteractionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OwningElevatorMoveStart(int32 NewFloor, bool bFromStationary);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OwningElevatorMoveEnd(int32 NewFloor);
    
    UFUNCTION(BlueprintCallable)
    FRPGInteractableRequirements GetRPGRequirements(EInteractionType InteractionType);
    
};

