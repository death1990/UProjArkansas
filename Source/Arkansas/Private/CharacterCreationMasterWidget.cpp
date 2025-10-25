#include "CharacterCreationMasterWidget.h"

UCharacterCreationMasterWidget::UCharacterCreationMasterWidget() {
    this->PageScrollBox = NULL;
    this->PageButtonGroup = NULL;
    this->ScrollingWidgetGroup = NULL;
    this->SkillPage = NULL;
    this->AptitudePage = NULL;
    this->SummaryPage = NULL;
    this->AppearancePage = NULL;
    this->NamePage = NULL;
    this->ContentContainer = NULL;
    this->NavigationBar = NULL;
    this->FramingPanel = NULL;
    this->PlayerNameTextBlock = NULL;
    this->BackgroundEffect = NULL;
    this->BannedNames = NULL;
    this->IntroMovie = NULL;
    this->OutroMoviePartOne = NULL;
    this->OutroMoviePartTwo = NULL;
}

void UCharacterCreationMasterWidget::PlayPartTwoOutroMovie(bool bWasSkipped) {
}

void UCharacterCreationMasterWidget::OnPageBack() {
}

void UCharacterCreationMasterWidget::OnOutroMovieTwoComplete(bool bWasSkipped) {
}




void UCharacterCreationMasterWidget::OnIntroMovieCompleteImpl(bool bWasSkipped) {
}


void UCharacterCreationMasterWidget::OnIntroAnimSequenceComplete() {
}





