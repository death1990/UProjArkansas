#include "BlockComponent.h"

UBlockComponent::UBlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->VFXRampInSpeed = 2.00f;
    this->VFXRampOutSpeed = 2.00f;
    this->bBlocking = false;
}


