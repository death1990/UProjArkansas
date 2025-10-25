#include "AIBehaviorFunctionLibrary_Equipment.h"
#include "AIEquipmentMonitor.h"

UAIBehaviorFunctionLibrary_Equipment::UAIBehaviorFunctionLibrary_Equipment() {
    this->AIEquipmentMonitor = CreateDefaultSubobject<UAIEquipmentMonitor>(TEXT("AIEquipmentMonitor"));
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::UnequipCurrentWeapon(const FAIBehaviorFunctionContext& Context, bool bInstant) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::TriggerQuickMelee(const FAIBehaviorFunctionContext& Context) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::TriggerAnimationControlledRangeAttack(const FAIBehaviorFunctionContext& Context, EAnimationControlledRangeAttackType AnimationControlledRangeAttackType) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::EquipWeaponByTag(const FAIBehaviorFunctionContext& Context, const FGameplayTag Tag, bool bInstant) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::EquipWeaponBySlot(const FAIBehaviorFunctionContext& Context, int32 SlotIndex, bool bInstant) {
    return EAIBehaviorFunctionResult::Success;
}

EAIBehaviorFunctionResult UAIBehaviorFunctionLibrary_Equipment::EquipWeaponByInstance(const FAIBehaviorFunctionContext& Context, const UWeapon* Weapon, bool bInstant) {
    return EAIBehaviorFunctionResult::Success;
}


