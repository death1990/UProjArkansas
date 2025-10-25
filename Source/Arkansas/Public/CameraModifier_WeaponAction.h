#pragma once
#include "CoreMinimal.h"
#include "OwCameraModifier.h"
#include "WeaponActionCameraTransformModifierInstance.h"
#include "WeaponSwayInstance.h"
#include "CameraModifier_WeaponAction.generated.h"

class UCameraModifier_WeaponActionData;
class UWeapon;
class UWeaponCameraSwayData;

UCLASS(Abstract, Blueprintable)
class UCameraModifier_WeaponAction : public UOwCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWeaponActionCameraTransformModifierInstance> CameraModifierInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponSwayInstance WeaponSwayInstance;
    
public:
    UCameraModifier_WeaponAction();

    UFUNCTION(BlueprintCallable)
    void StopWeaponAction(UCameraModifier_WeaponActionData* ActionData);
    
    UFUNCTION(BlueprintCallable)
    void SetupWeaponSway(UWeaponCameraSwayData* CameraSwayData, UWeapon* OwnerWeapon);
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponAction(UCameraModifier_WeaponActionData* ActionData);
    
};

