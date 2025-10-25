#include "DamageBlueprintFunctionLibrary.h"

UDamageBlueprintFunctionLibrary::UDamageBlueprintFunctionLibrary() {
}

bool UDamageBlueprintFunctionLibrary::IsDamageWeakspot(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageStealth(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageMelee(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageKillingBlow(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFriendlyFire(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsWeakspot(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsStealth(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsMelee(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsKillingBlow(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsFriendlyFire(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsCritical(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageFlagsBlocked(int32 DamageFlags) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageCritical(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

bool UDamageBlueprintFunctionLibrary::IsDamageBlocked(const FIndianaDamageEvent& DamageEvent) {
    return false;
}

UObject* UDamageBlueprintFunctionLibrary::GetDamageSource(const FCauseDamageInfo& CDI) {
    return NULL;
}

FDamageDescription UDamageBlueprintFunctionLibrary::GetDamageDescription(const FCauseDamageInfo& CDI) {
    return FDamageDescription{};
}


