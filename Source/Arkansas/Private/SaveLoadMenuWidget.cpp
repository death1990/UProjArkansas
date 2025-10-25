#include "SaveLoadMenuWidget.h"

USaveLoadMenuWidget::USaveLoadMenuWidget() {
    this->SaveLoadDetail = NULL;
    this->NewSaveClass = NULL;
    this->bSupportsSplitSaveLoadByPlaythrough = false;
    this->ShowCountRatio = 0.00f;
    this->NearCapacityRatio = 0.90f;
    this->bShowCapacityOnLoad = true;
    this->bFocusPreviousOnDelete = true;
    this->SaveCountOverride = 0;
    this->InterfaceTitleText = NULL;
    this->SaveCountTracker = NULL;
    this->SaveGamesText = NULL;
    this->Background = NULL;
    this->NearCapacityDisplay = NULL;
    this->AtCapacityDisplay = NULL;
    this->InvisibleButton = NULL;
    this->SaveGameBlocker = NULL;
    this->InputLabelGroup = NULL;
    this->ContentPanelWidget = NULL;
    this->PlaythroughNavBar = NULL;
    this->CachedDetailWidget = NULL;
    this->RefocusWidget = NULL;
}

void USaveLoadMenuWidget::OnStorageStatusChanged(ESaveGameStorageStatus NewStatus) {
}

void USaveLoadMenuWidget::OnSaveDataRequestFinished() {
}

void USaveLoadMenuWidget::OnLoadComplete(const FString& Filename, ELoadGameResult Result) {
}

void USaveLoadMenuWidget::OnExitInterface() {
}

void USaveLoadMenuWidget::OnAccessibleScreenshotRequestFinished(const FString& Filename) {
}

void USaveLoadMenuWidget::DeleteSave() {
}

void USaveLoadMenuWidget::CyclePlaythrough(bool bCycleForward, int32 OverrideIndex) {
}


