#include "CoverCircleComponent.h"

UCoverCircleComponent::UCoverCircleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 30.00f;
    this->Height = 100.00f;
    this->HalfNode = NULL;
    this->LeftNode = NULL;
    this->RightNode = NULL;
    this->CoverSegment = NULL;
}


