#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CineCombatCameraEndDelegateDelegate.h"
#include "CineCombatCameraStartDelegateDelegate.h"
#include "CineCombatCamera.generated.h"

class UCineCombatCameraParams;

UCLASS(Blueprintable)
class ACineCombatCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCineCombatCameraStartDelegate CineCombatCameraStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCineCombatCameraEndDelegate CineCombatCameraEndDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCombatCameraParams* CameraParams;
    
public:
    ACineCombatCamera(const FObjectInitializer& ObjectInitializer);

};

