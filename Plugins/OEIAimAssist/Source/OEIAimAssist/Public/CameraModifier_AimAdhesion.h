#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Camera\CameraModifier.h"
#include "AimAdhesionConfig.h"
#include "AimAssistTargetInfo.h"
#include "CameraModifier_AimAdhesion.generated.h"

UCLASS(Blueprintable)
class OEIAIMASSIST_API UCameraModifier_AimAdhesion : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAimAdhesionConfig CurrentConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLookInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAimAssistTargetInfo LastTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastTraceOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AppliedAdhesion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetLostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAimSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimSnappingTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimSnappingStartTime;
    
public:
    UCameraModifier_AimAdhesion();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAdhesionRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAdhesionPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAdhesionDistance() const;
    
};

