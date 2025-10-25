#include "AIWeaponFiringPriorityFunctionLibrary.h"

UAIWeaponFiringPriorityFunctionLibrary::UAIWeaponFiringPriorityFunctionLibrary() {
}

FPriorityNodeHandle UAIWeaponFiringPriorityFunctionLibrary::StopRangedAttackDelayed(AIndianaAiController* Controller, EPriorityNodeValue Priority) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAIWeaponFiringPriorityFunctionLibrary::StopFireWeapon(AIndianaAiController* Controller, EPriorityNodeValue Priority) {
    return FPriorityNodeHandle{};
}

FPriorityNodeHandle UAIWeaponFiringPriorityFunctionLibrary::StartFireWeapon(AIndianaAiController* Controller, EPriorityNodeValue Priority, FAIWeaponFiringSettings AIWeaponFiringSettings) {
    return FPriorityNodeHandle{};
}


