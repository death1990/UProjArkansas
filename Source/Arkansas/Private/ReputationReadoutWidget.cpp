#include "ReputationReadoutWidget.h"

UReputationReadoutWidget::UReputationReadoutWidget() {
    this->ValueTextBlock = NULL;
    this->BarMaterialInst = NULL;
    this->ReputationChange = NULL;
    this->ReputationBar = NULL;
    this->BarOverlay = NULL;
    this->RepChangeAnimTime = 2.00f;
    this->bShowBarImage = true;
    this->bShowPercentageText = true;
    this->bFlipReputationBar = false;
}


