#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnOccupiedElevatorStop.generated.h"

class AElevator;
class UEnvironmentInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnOccupiedElevatorStop : public UEventListener {
    GENERATED_BODY()
public:
    UOnOccupiedElevatorStop();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOccupiedElevatorStop(UEnvironmentInteractionComponent* EnvironmentComponent, AElevator* Elevator);
    
};

