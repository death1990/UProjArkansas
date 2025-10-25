#include "GadgetDematerializer.h"

UGadgetDematerializer::UGadgetDematerializer() {
    this->CurrentAnimations = NULL;
    this->TPVCurrentAnimations = NULL;
    this->DematerializerWeapon = NULL;
    this->SprayCatalyzingPerkSpell = NULL;
    this->SprayCatalyzingProjectileLifetimeStat = NULL;
    this->SprayCatalyzingProjectileDamageStat = NULL;
}

void UGadgetDematerializer::OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered) {
}

void UGadgetDematerializer::OnOwnerStopSprint() {
}

void UGadgetDematerializer::OnOwnerStartThrowable() {
}

void UGadgetDematerializer::OnOwnerStartSprint() {
}

void UGadgetDematerializer::OnEquipUnequipWeaponEnd(UEquipmentComponent* UnusedEquipmentComponent, UWeapon* UnusedWeapon) {
}

void UGadgetDematerializer::OnEquippedWeaponEndHolster(UWeapon* Weapon) {
}


