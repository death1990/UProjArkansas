#include "OwBehaviorTreeComponent.h"

UOwBehaviorTreeComponent::UOwBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlackboardComponent = NULL;
    this->bIsInGroupBehavior = false;
    this->bIsGroupBehaviorLockActive = false;
    this->bIsInInterrupt = false;
    this->bCanTick = false;
    this->BehaviorTreeData = NULL;
}


