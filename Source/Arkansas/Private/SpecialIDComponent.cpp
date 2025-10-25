#include "SpecialIDComponent.h"

USpecialIDComponent::USpecialIDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpecialID = ESpecialObsidianID::None;
}

ESpecialObsidianID USpecialIDComponent::GetSpecialID() const {
    return ESpecialObsidianID::None;
}


