#pragma once
#include "CoreMinimal.h"
#include "HitFlinchAnim.h"
#include "WeaponAnimations.h"
#include "WeaponAnimationsCreature.generated.h"

class ULocomotionAnimationData;

UCLASS(Abstract, Blueprintable)
class UWeaponAnimationsCreature : public UWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocomotionAnimationData* CombatLocomotionData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitFlinchAnim> HitFlinches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitFlinchAnim> BlockingHitFlinches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitFlinchAnim> CrouchingHitFlinches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSourceVerticalOffset;
    
public:
    UWeaponAnimationsCreature();

};

