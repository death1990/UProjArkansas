#include "RecoilManagerComponent.h"

URecoilManagerComponent::URecoilManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->RecoilData = NULL;
}


