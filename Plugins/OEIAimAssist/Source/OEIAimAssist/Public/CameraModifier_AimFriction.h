#pragma once
#include "CoreMinimal.h"
#include "Camera\CameraModifier.h"
#include "AimFrictionConfig.h"
#include "CameraModifier_AimFriction.generated.h"

class AActor;

UCLASS(Blueprintable)
class OEIAIMASSIST_API UCameraModifier_AimFriction : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAimFrictionConfig CurrentConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLookInputMaximized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AppliedFrictionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInDelay;
    
public:
    UCameraModifier_AimFriction();

};

