#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DematerializerAnimationSet.h"
#include "Templates/SubclassOf.h"
#include "DematerializerAnimationsTPV.generated.h"

class UPlayerTPVWeaponAnimations;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class UDematerializerAnimationsTPV : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerTPVWeaponAnimations> PlayerWeaponAnimationsOverrideClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerTPVWeaponAnimations* PlayerWeaponAnimationsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDematerializerAnimationSet StandingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDematerializerAnimationSet CrouchedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDematerializerAnimationSet CrouchMoveAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;
    
public:
    UDematerializerAnimationsTPV();

};

