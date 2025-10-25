#include "OwSpeakerInfoComponent.h"

UOwSpeakerInfoComponent::UOwSpeakerInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->LookTargetOverride = NULL;
    this->bAllowBarkConversationDuringCombat = false;
    this->bOverrideSpeakerName = false;
    this->bHideFactionInfoInConversation = false;
    this->bUsesStageMarks = true;
    this->bAutoAlignToAssignedStageMarks = true;
    this->StageInstance = NULL;
    this->StageAsset = NULL;
    this->bEnableSpawnedStageLightingRigs = true;
    this->StageSpawnLocationActor = NULL;
    this->bMovePlayerToMark = true;
    this->CustomPresentationMode = NULL;
    this->DefaultDynamicFxAuxBus = NULL;
    this->AttenuationScaling = 0.00f;
}

FSpeakerReference UOwSpeakerInfoComponent::GetSpeakerReference() const {
    return FSpeakerReference{};
}

FString UOwSpeakerInfoComponent::GetName() const {
    return TEXT("");
}

EOEIGender UOwSpeakerInfoComponent::GetGender() const {
    return EOEIGender::Male;
}


