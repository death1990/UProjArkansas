#include "DifficultyManager.h"

UDifficultyManager::UDifficultyManager() {
    this->Difficulty = EGameDifficulty::Normal;
    this->SurvivalMode = false;
}

void UDifficultyManager::SetSurvivalMode(bool IsSurvivalMode) {
}

void UDifficultyManager::SetDifficulty(EGameDifficulty NewDifficulty) {
}

EGameDifficulty UDifficultyManager::GetGameDifficulty() {
    return EGameDifficulty::Story;
}


