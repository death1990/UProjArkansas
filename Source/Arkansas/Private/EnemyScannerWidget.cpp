#include "EnemyScannerWidget.h"

UEnemyScannerWidget::UEnemyScannerWidget() {
    this->NameValueTextBlock = NULL;
    this->FactionValueTextBlock = NULL;
    this->LevelValueTextBlock = NULL;
    this->HealthValueTextBlock = NULL;
    this->ArmorValueTextBlock = NULL;
    this->StrongAgainstValueTextBlock = NULL;
    this->WeakAgainstValueTextBlock = NULL;
    this->StrongAgainstBox = NULL;
    this->WeakAgainstBox = NULL;
}

void UEnemyScannerWidget::ScanEnded() {
}

void UEnemyScannerWidget::ScanCompleted() {
}


