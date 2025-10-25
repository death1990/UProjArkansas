#include "OEIWodemFoliage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AOEIWodemFoliage::AOEIWodemFoliage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BBComp = NULL;
    this->LabelComp = NULL;
    this->InfoTextComp = NULL;
    this->bEnabled = true;
    this->RandomSeed = 0;
    this->ActorMode = Manual;
    this->bRemoveFromPath = false;
    this->DistributionMode = Grid;
    this->InstanceSpacing = 500;
    this->PointOffset = 0.50f;
    this->MaxInstanceCount = 1000000;
}

void AOEIWodemFoliage::LoadJsonFile() {
}

TArray<AActor*> AOEIWodemFoliage::GetScatterSurfaces() {
    return TArray<AActor*>();
}

void AOEIWodemFoliage::ForceScatter() {
}

void AOEIWodemFoliage::AssignSelectedSurfaces(TArray<UObject*> SelectedActors) {
}

void AOEIWodemFoliage::AssignSelectedExcludeActors(TArray<UObject*> SelectedActors) {
}


