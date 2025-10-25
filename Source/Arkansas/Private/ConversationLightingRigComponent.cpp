#include "ConversationLightingRigComponent.h"

UConversationLightingRigComponent::UConversationLightingRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLightingRigEnabled = true;
    this->BlendTime = 1.00f;
    this->ConversationLightingRig = NULL;
}


