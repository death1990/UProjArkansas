#pragma once
#include "CoreMinimal.h"
#include "OwAnimInstance.h"
#include "PreviewCharacterAnimInstance.generated.h"

class UPoseAsset;
class UPreviewWeaponAnimations;

UCLASS(Blueprintable, NonTransient)
class UPreviewCharacterAnimInstance : public UOwAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreWeaponIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIkLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPoseAsset* FacePoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPreviewWeaponAnimations* PreviewAnimations;
    
public:
    UPreviewCharacterAnimInstance();

};

