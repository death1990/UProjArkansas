#include "NavSeedActor.h"
#include "NavSeedActorComponent.h"

ANavSeedActor::ANavSeedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UNavSeedActorComponent>(TEXT("SceneComp"));
    this->bSeedCompanionNavAgents = false;
    this->Radius = 0.00f;
    this->bInfiniteRadius = false;
}


