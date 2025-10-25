#include "OwStageMarkActor.h"
#include "ConversationLightingRigComponent.h"

AOwStageMarkActor::AOwStageMarkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AcceptableRangeRadius = 3.00f;
    this->LinkedMarkActor = NULL;
    this->LinkedRelativePositionMarkActor = NULL;
    this->ConversationLightingRigComponent = CreateDefaultSubobject<UConversationLightingRigComponent>(TEXT("ConversationLightingRigComponent"));
}

void AOwStageMarkActor::SetMarkPriority(uint8 InMarkPriority) {
}


