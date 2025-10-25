#include "AmmoPoolBase.h"
#include "Templates/SubclassOf.h"

UAmmoPoolBase::UAmmoPoolBase() {
    this->bInstantReloadCancel = true;
    this->AmmoReloadType = EAmmoReloadType::Magazine;
    this->ReloadTime = 0.25f;
    this->bAllowPartialReloadWhileADS = false;
    this->bHasEmptyReload = true;
    this->bAllowEmptyReloadWhileADS = false;
    this->AmmoEmptyReloadType = EAmmoReloadType::Magazine;
    this->EmptyReloadTime = 0.25f;
    this->FuelReloadTime = 0.25f;
    this->InfiniteAmmoSpell = NULL;
}

bool UAmmoPoolBase::UsesConsumables() const {
    return false;
}

bool UAmmoPoolBase::UsesAmmo() const {
    return false;
}

void UAmmoPoolBase::SetIgnoreAmmoCount(bool bNewIgnoreAmmoCount) {
}

bool UAmmoPoolBase::RefillAmmo(int32 Amount, bool bForcePlayerEquipped) {
    return false;
}

void UAmmoPoolBase::OnTacticalTimeDilationStarted() {
}

void UAmmoPoolBase::OnTacticalTimeDilationEnd(float Duration) {
}

void UAmmoPoolBase::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

bool UAmmoPoolBase::IsReloading() const {
    return false;
}

int32 UAmmoPoolBase::GetPoolSize() const {
    return 0;
}

int32 UAmmoPoolBase::GetMissingAmmo() const {
    return 0;
}

float UAmmoPoolBase::GetMaxReloadTime() const {
    return 0.0f;
}

int32 UAmmoPoolBase::GetCurrentPoolSize() const {
    return 0;
}

TSubclassOf<UConsumableItem> UAmmoPoolBase::GetCurrentConsumableClass() const {
    return NULL;
}

TSubclassOf<UAmmo> UAmmoPoolBase::GetCurrentAmmoClass() const {
    return NULL;
}

UAmmo* UAmmoPoolBase::GetCurrentAmmo() const {
    return NULL;
}

float UAmmoPoolBase::GetBaseReloadTime() const {
    return 0.0f;
}

float UAmmoPoolBase::GetAdjustedReloadTime() const {
    return 0.0f;
}

void UAmmoPoolBase::ConsumeAmmo(int32 Amount) {
}


