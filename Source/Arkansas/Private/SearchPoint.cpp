#include "SearchPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASearchPoint::ASearchPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

bool ASearchPoint::K2_IsRegisteredController(AIndianaAiController* Controller) const {
    return false;
}

bool ASearchPoint::K2_IsNearestRegisteredController(AIndianaAiController* Controller) const {
    return false;
}

AIndianaAiController* ASearchPoint::K2_GetNearestRegisteredController(float& Distance) const {
    return NULL;
}


