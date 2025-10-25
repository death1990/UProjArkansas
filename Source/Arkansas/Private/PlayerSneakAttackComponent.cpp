#include "PlayerSneakAttackComponent.h"

UPlayerSneakAttackComponent::UPlayerSneakAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerEquipmentComponent = NULL;
    this->PlayerInteractionComponent = NULL;
}


