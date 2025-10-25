#include "DebugCharacterLoadout.h"

UDebugCharacterLoadout::UDebugCharacterLoadout() {
    this->OverridePlayerLevel = 0;
    this->bAllowLevelChangeSkillsAndPerks = false;
    this->Traits = NULL;
    this->Background = NULL;
    this->Skills = NULL;
    this->bClearExistingPerks = false;
    this->bClearAllInventory = false;
    this->Companion1 = NULL;
    this->Companion1SpawnPreference = ESpawnLocationPreference::Forward;
    this->Companion2 = NULL;
    this->Companion2SpawnPreference = ESpawnLocationPreference::Forward;
    this->GameState = NULL;
    this->bFadeVolumeIn = false;
}




