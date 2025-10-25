#pragma once
#include "CoreMinimal.h"
#include "ECalledShotCameraStep.h"
#include "EventListener.h"
#include "OnCalledShotCameraChange.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnCalledShotCameraChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalledShotCameraStep CameraStepChange;
    
public:
    UOnCalledShotCameraChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCameraStepEvent(AActor* CameraOwner, ECalledShotCameraStep CameraStep);
    
};

