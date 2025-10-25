#include "SpellManagedAmmoPool.h"

USpellManagedAmmoPool::USpellManagedAmmoPool() {
    this->DefaultAmmoClass = NULL;
    this->PoolSize = 1;
    this->CurrentAmmo = NULL;
}

void USpellManagedAmmoPool::SetIsReloading(bool bNewIsReloading) {
}


