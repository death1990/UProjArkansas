#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "GameFramework\SpectatorPawn.h"

#include "EPhotoPawnType.h"
#include "PhotoPawn.generated.h"

class UCineCameraComponent;
class UCurveFloat;
class UMaterialInterface;
class USpringArmComponent;

UCLASS(Blueprintable)
class OEIPHOTOMODE_API APhotoPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* CameraComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShutterEffectFloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CameraShutterPPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShutterEffectStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShutterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DidUnregisterFromPerception;
    
public:
    APhotoPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TakePhoto();
    
    UFUNCTION(BlueprintCallable)
    bool SwapInputAxisBinding(const FName OldAxisName, const FName NewAxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoTakenXbox();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhotoTaken(int32 Width, int32 Height, const TArray<FColor>& Colors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhotoPawnType GetPhotoPawnType() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitPhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeCameraType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BrowsePhotos();
    
};

