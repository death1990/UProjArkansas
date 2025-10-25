#include "OwPlayerCameraManager.h"
#include "OwCinematicCameraModifier.h"

AOwPlayerCameraManager::AOwPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->OwCinematicCameraModifier = CreateDefaultSubobject<UOwCinematicCameraModifier>(TEXT("OwCinematicCameraModifier"));
}


