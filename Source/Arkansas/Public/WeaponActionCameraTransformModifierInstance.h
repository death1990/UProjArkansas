#pragma once
#include "CoreMinimal.h"
#include "WeaponActionCameraTransformModifierInstance.generated.h"

class UCameraModifier_WeaponActionData;

USTRUCT(BlueprintType)
struct FWeaponActionCameraTransformModifierInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_WeaponActionData* ActionData;
    
    ARKANSAS_API FWeaponActionCameraTransformModifierInstance();
};

