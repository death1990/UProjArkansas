#include "EncounterVolume.h"
#include "EncounterVolumeComponent.h"

AEncounterVolume::AEncounterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEncounterVolumeComponent>(TEXT("SceneComp"))) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
}


