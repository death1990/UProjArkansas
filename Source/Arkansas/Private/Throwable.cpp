#include "Throwable.h"
#include "AssetCollection.h"

UThrowable::UThrowable() {
    this->Skill = ESkill::Melee;
    this->bApplyDamageDescriptionToSpawnedActor = false;
    this->PlayerWeaponAnimationsOverride = NULL;
    this->AimPitchOffset = 0.00f;
    this->PlayerProjectileInitialLifetime = 0.00f;
    this->bCookable = false;
    this->PlayerProjectilePostBounceLifetime = 0.00f;
    this->AIProjectileInitialLifetime = 0.00f;
    this->AIProjectilePostBounceLifetime = 0.00f;
    this->AssetCollection = CreateDefaultSubobject<UAssetCollection>(TEXT("AssetCollection"));
    this->HeldProjectileClassDefaultObject = NULL;
    this->ProjectileClassDefaultObject = NULL;
    this->AttachedProxyProjectile = NULL;
    this->ArcVisuals = NULL;
    this->bAIPreferLowArc = true;
    this->bIsOffensiveThrowable = true;
    this->bIsDefensiveThrowable = false;
    this->ActorPool = NULL;
    this->PoolSize = 3;
    this->PooledActorClass = NULL;
}

void UThrowable::ReenableProjectileCollision() {
}

void UThrowable::OnOwnerStopSprint() {
}

void UThrowable::OnOwnerInterrupted() {
}

void UThrowable::OnInventoryItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UThrowable::OnEquippedWeaponEndHolster(UWeapon* Weapon) {
}

void UThrowable::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

FGameplayTag UThrowable::GetThrowableTag() const {
    return FGameplayTag{};
}

float UThrowable::GetRadius() const {
    return 0.0f;
}


