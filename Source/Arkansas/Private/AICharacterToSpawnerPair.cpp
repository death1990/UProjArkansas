#include "AICharacterToSpawnerPair.h"

FAICharacterToSpawnerPair::FAICharacterToSpawnerPair() {
    this->Character = NULL;
    this->Spawner = NULL;
    this->bDormant = false;
    this->AwakenDelay = 0.00f;
}

