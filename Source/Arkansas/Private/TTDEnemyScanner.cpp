#include "TTDEnemyScanner.h"

UTTDEnemyScanner::UTTDEnemyScanner() {
    this->ScannerFadeTime = 0.35f;
    this->ContentPanel = NULL;
    this->AnalysisHeaderTextBlock = NULL;
    this->AnalysisText = NULL;
    this->ArmorTextBlock = NULL;
    this->CombatRoleText = NULL;
    this->EnemyName = NULL;
    this->FactionLabel = NULL;
    this->FactionName = NULL;
    this->FlavorText = NULL;
    this->HealthTextBlock = NULL;
    this->StatusHeaderTextBlock = NULL;
    this->TeamAttitudeTextBlock = NULL;
    this->WeaponDisplay = NULL;
    this->WeaponTextBlock = NULL;
    this->StatusEffects = NULL;
    this->ContainerScaleBox = NULL;
}

void UTTDEnemyScanner::ScanEnded() {
}

void UTTDEnemyScanner::ScanCompleted() {
}

void UTTDEnemyScanner::OnScaleSettingChanged(float NewValue) {
}

void UTTDEnemyScanner::OnMadeVisible() {
}

void UTTDEnemyScanner::OnMadeInvisible() {
}

void UTTDEnemyScanner::OnHUDVisibilityChanged(bool bVisible) {
}

void UTTDEnemyScanner::OnActiveScannerTargetChanged() {
}


