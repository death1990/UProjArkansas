#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CameraTransformModifier.h"
#include "CameraModifier_WeaponActionData.generated.h"

class UCameraModifier_WeaponActionData;

UCLASS(Blueprintable)
class ARKANSAS_API UCameraModifier_WeaponActionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_WeaponActionData* ParentAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleWithWeaponRecoilStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransformModifier> TransformModifiers;
    
    UCameraModifier_WeaponActionData();

};

