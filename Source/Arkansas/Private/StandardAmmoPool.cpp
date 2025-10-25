#include "StandardAmmoPool.h"

UStandardAmmoPool::UStandardAmmoPool() {
    this->PoolSize = 10;
    this->DefaultAmmoClass = NULL;
    this->CurrentAmmo = NULL;
    this->PendingAmmoClass = NULL;
    this->LoadingAmmoClass = NULL;
}


