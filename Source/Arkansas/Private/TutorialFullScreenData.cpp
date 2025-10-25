#include "TutorialFullScreenData.h"

FTutorialFullScreenData::FTutorialFullScreenData() {
    this->DisplayType = ETutorialDisplayType::Invalid;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bShowTutorialTag = false;
    this->bShowTutorialName = false;
    this->BrandType = NULL;
    this->DisplayMovie = NULL;
    this->bUsesEnglishText = false;
}

