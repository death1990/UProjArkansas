#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "Gadget.h"
#include "Templates/SubclassOf.h"
#include "WeaponItemDefinition.h"
#include "GadgetDematerializer.generated.h"

class AActor;
class UDematerializerAnimationsFPV;
class UDematerializerAnimationsTPV;
class UEquipmentComponent;
class UNewPropData;
class URpgStat;
class USpell;
class UWeapon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGadgetDematerializer : public UGadget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponItemDefinition DematerializerWeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDematerializerAnimationsFPV> DematerializerAnimationsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDematerializerAnimationsFPV* CurrentAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDematerializerAnimationsTPV> TPVDematerializerAnimationsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDematerializerAnimationsTPV* TPVCurrentAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeapon* DematerializerWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNewPropData> DematerializerProp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNewPropData> DematerializerPropTPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> SprayCatalyzingPerkSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SprayCatalyzingPerkLifetimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SprayCatalyzingPerkDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* SprayCatalyzingProjectileLifetimeStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* SprayCatalyzingProjectileDamageStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompleteEvent;
    
public:
    UGadgetDematerializer();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerStopSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerStartThrowable();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerStartSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipUnequipWeaponEnd(UEquipmentComponent* UnusedEquipmentComponent, UWeapon* UnusedWeapon);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedWeaponEndHolster(UWeapon* Weapon);
    
};

