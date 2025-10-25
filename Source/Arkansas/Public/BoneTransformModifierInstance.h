#pragma once
#include "CoreMinimal.h"
#include "BoneTransformModifierInstance.generated.h"

class UWeaponRecoilBoneData;

USTRUCT(BlueprintType)
struct FBoneTransformModifierInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponRecoilBoneData* BoneData;
    
    ARKANSAS_API FBoneTransformModifierInstance();
};

