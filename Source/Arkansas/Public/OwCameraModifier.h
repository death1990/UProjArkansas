#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "OwCameraModifier.generated.h"

class APlayerCameraManager;

UCLASS(Abstract, Blueprintable)
class UOwCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowSingleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDisableTime;
    
public:
    UOwCameraModifier();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintReapplied();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintAddedToCamera(APlayerCameraManager* Camera);
    
};

