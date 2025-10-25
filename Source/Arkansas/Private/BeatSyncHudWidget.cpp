#include "BeatSyncHudWidget.h"

UBeatSyncHudWidget::UBeatSyncHudWidget() {
    this->PlayEvent = NULL;
    this->StopEvent = NULL;
    this->ComboStageRTPC = NULL;
}

void UBeatSyncHudWidget::StopMusic() {
}

void UBeatSyncHudWidget::PlayMusic() {
}

void UBeatSyncHudWidget::OnMusicSyncEntry(const float BarDuration, const float BeatDuration) {
}

void UBeatSyncHudWidget::ComboStageUpdate(const int32 CurrentComboStage) {
}


