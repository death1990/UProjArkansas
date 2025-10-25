#include "Gadget.h"
#include "AssetCollection.h"

UGadget::UGadget() {
    this->GadgetActivatedSpell = NULL;
    this->bCanBeEquipped = true;
    this->bAllowReactivation = false;
    this->ActivateTime = 1.00f;
    this->ActivationAnimDurationOverride = 0.00f;
    this->DeactivateTime = 1.00f;
    this->DeactivationAnimDurationOverride = 0.00f;
    this->DeactivateVisualsTime = 0.00f;
    this->bDeactivateOnInputRelease = false;
    this->CooldownTime = 0.00f;
    this->MaxActiveDuration = 0.00f;
    this->ActivationCost = 0.00f;
    this->MinimumEnergyActivation = 0.00f;
    this->bAllowTickRechargeWhileActivated = false;
    this->ActionEnergyScalar = 1.00f;
    this->TickEnergyScalar = 1.00f;
    this->bGadgetDeactivatesAtZeroEnergy = true;
    this->EnergyConsumption = 0;
    this->bIgnoreOutOfCombatEnergyConsumption = false;
    this->UIAvailableTexture = NULL;
    this->UIUnavailableTexture = NULL;
    this->CurrentEventVisuals = NULL;
    this->AssetCollection = CreateDefaultSubobject<UAssetCollection>(TEXT("AssetCollection"));
    this->bGadgetInterruptsWeaponAnimationsOnEquip = false;
}


