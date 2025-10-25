#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnOccupiedElevatorMove.generated.h"

class AElevator;
class UEnvironmentInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnOccupiedElevatorMove : public UEventListener {
    GENERATED_BODY()
public:
    UOnOccupiedElevatorMove();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOccupiedElevatorMove(UEnvironmentInteractionComponent* EnvironmentComponent, AElevator* Elevator);
    
};

