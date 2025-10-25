#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "BoneNameData.h"
#include "MaterialInterfaceData.h"
#include "AnimNotify_WeaponBoneToggle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_WeaponBoneToggle : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneNameData ShowBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneNameData HideBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMaterialInterfaceData> MaterialSwaps;
    
public:
    UAnimNotify_WeaponBoneToggle();

};

