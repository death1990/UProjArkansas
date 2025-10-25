#include "CharacterInventoryComponent.h"

UCharacterInventoryComponent::UCharacterInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCacheDefaultWeaponAssets = false;
    this->bCanBePickPocketed = false;
    this->LegalPickpocketSpell = NULL;
    this->bCanBeHacked = false;
}


