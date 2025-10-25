#include "HackableComponent.h"

UHackableComponent::UHackableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HackingPortEnterMontage = NULL;
    this->HackingPortExitMontage = NULL;
}


