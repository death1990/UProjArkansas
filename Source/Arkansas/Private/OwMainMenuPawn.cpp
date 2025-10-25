#include "OwMainMenuPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "OwPlayerSpeakerInfoComponent.h"

AOwMainMenuPawn::AOwMainMenuPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeakerInfoComponent = CreateDefaultSubobject<UOwPlayerSpeakerInfoComponent>(TEXT("OwSpeakerInfo"));
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}


