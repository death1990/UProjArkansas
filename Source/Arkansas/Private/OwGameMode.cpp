#include "OwGameMode.h"

AOwGameMode::AOwGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomPlayerClass = NULL;
    this->CustomPlayerStart = NULL;
}


