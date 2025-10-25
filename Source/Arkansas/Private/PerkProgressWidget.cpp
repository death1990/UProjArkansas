#include "PerkProgressWidget.h"

UPerkProgressWidget::UPerkProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PerkIcon = NULL;
    this->PerkProgressBar = NULL;
    this->PerkIncreaseValue = NULL;
    this->CompletedPerkAnim = NULL;
    this->PerkIconTexture = NULL;
    this->bShowPerkIcon = true;
    this->bShouldShowProgressText = false;
    this->bShowProgressAsPercent = false;
}



