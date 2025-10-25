#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CustomTransformModifierArray.h"
#include "EDesignSlot.h"
#include "WeaponRecoilBoneData.generated.h"

class UWeaponRecoilBoneData;

UCLASS(Blueprintable)
class ARKANSAS_API UWeaponRecoilBoneData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponRecoilBoneData* ParentAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDesignSlot, FCustomTransformModifierArray> TransformModifiersBySlot;
    
    UWeaponRecoilBoneData();

};

