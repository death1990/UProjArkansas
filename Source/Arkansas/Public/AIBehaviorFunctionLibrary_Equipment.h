#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AIBehaviorFunctionContext.h"
#include "AIBehaviorFunctionLibrary.h"
#include "EAIBehaviorFunctionResult.h"
#include "EAnimationControlledRangeAttackType.h"
#include "AIBehaviorFunctionLibrary_Equipment.generated.h"

class UAIEquipmentMonitor;
class UWeapon;

UCLASS(Blueprintable)
class UAIBehaviorFunctionLibrary_Equipment : public UAIBehaviorFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIEquipmentMonitor* AIEquipmentMonitor;
    
public:
    UAIBehaviorFunctionLibrary_Equipment();

    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult UnequipCurrentWeapon(const FAIBehaviorFunctionContext& Context, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult TriggerQuickMelee(const FAIBehaviorFunctionContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult TriggerAnimationControlledRangeAttack(const FAIBehaviorFunctionContext& Context, EAnimationControlledRangeAttackType AnimationControlledRangeAttackType);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult EquipWeaponByTag(const FAIBehaviorFunctionContext& Context, const FGameplayTag Tag, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult EquipWeaponBySlot(const FAIBehaviorFunctionContext& Context, int32 SlotIndex, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static EAIBehaviorFunctionResult EquipWeaponByInstance(const FAIBehaviorFunctionContext& Context, const UWeapon* Weapon, bool bInstant);
    
};

