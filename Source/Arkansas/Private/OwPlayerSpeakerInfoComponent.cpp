#include "OwPlayerSpeakerInfoComponent.h"

UOwPlayerSpeakerInfoComponent::UOwPlayerSpeakerInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->Gender = EOEIGender::Male;
}

void UOwPlayerSpeakerInfoComponent::SetGenderDebug(EOEIGender GenderIn) {
}


