#include "OEICrowdManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AOEICrowdManager::AOEICrowdManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CurrentConstructingCharacter = NULL;
    this->CrowdSettings = NULL;
    this->RecastCrowdManager = NULL;
}

void AOEICrowdManager::SetCrowdsCombatState(bool bEnabled) {
}

bool AOEICrowdManager::GetCrowdsCombatState() {
    return false;
}

bool AOEICrowdManager::GetActiveCrowdVolumes(TArray<AOEICrowdVolume*>& OutCrowdVolumes) {
    return false;
}


