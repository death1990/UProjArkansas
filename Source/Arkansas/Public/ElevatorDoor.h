#pragma once
#include "CoreMinimal.h"
#include "Door.h"
#include "ElevatorDoor.generated.h"

UCLASS(Blueprintable)
class AElevatorDoor : public ADoor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
public:
    AElevatorDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor(bool bInstantAnimate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnElevatorCalled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

