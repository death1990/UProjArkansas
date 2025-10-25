#pragma once
#include "CoreMinimal.h"
#include "WeaponAnimationsTPV.h"
#include "PlayerTPVWeaponAnimations.generated.h"

class UAnimSequenceBase;
class UPlayerTPVAnimationData;

UCLASS(Blueprintable)
class ARKANSAS_API UPlayerTPVWeaponAnimations : public UWeaponAnimationsTPV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CombatRightHandPoseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CombatBasePose_AdditiveAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeaponDownStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeaponDownLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeaponDownEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* NonCombatBasePose_AdditiveAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerTPVAnimationData* PlayerAnimData;
    
    UPlayerTPVWeaponAnimations();

};

