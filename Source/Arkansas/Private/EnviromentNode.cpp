#include "EnviromentNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AEnviromentNode::AEnviromentNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void AEnviromentNode::K2_SetOccupiedBy(AIndianaCharacter* InOccupier) {
}

bool AEnviromentNode::K2_IsOccupiedBy(AIndianaCharacter* InOccupier) const {
    return false;
}

bool AEnviromentNode::K2_IsOccupied() {
    return false;
}

void AEnviromentNode::K2_ClearOccupiedBy(AIndianaCharacter* InOccupier) {
}

bool AEnviromentNode::IsOccupiedByOthers(AIndianaCharacter* InOccupier) const {
    return false;
}

AIndianaCharacter* AEnviromentNode::GetOccupier() const {
    return NULL;
}


