#include "WeaponVisuals.h"
#include "EventEffectState.h"

UWeaponVisuals::UWeaponVisuals() {
    this->Perspective = EMeshPerspective::Current;
    this->Weapon = NULL;
    this->WeaponMesh = NULL;
    this->CharacterMesh = NULL;
    this->PreviousVisual = NULL;
    this->NextVisual = NULL;
    this->EventEffectState = CreateDefaultSubobject<UEventEffectState>(TEXT("EventEffectState"));
}



void UWeaponVisuals::TriggerDamageTypeMuzzleFx() {
}






bool UWeaponVisuals::IsModEquipped(TSoftClassPtr<UWeaponMod> WeaponMod) const {
    return false;
}



UWeapon* UWeaponVisuals::GetOwningWeapon() const {
    return NULL;
}

int32 UWeaponVisuals::GetAmmoPerShot() {
    return 0;
}



void UWeaponVisuals::CreateLerpTimer(const FLerpTimer& TimerProperties) {
}


