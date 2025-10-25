#include "OptionPresenterWidget.h"

UOptionPresenterWidget::UOptionPresenterWidget() {
    this->bShouldShowButtons = true;
    this->bShowButtonsGamepad = false;
    this->Setting = NULL;
    this->bAllowKBMWrapping = false;
    this->bAllowGamepadWrapping = false;
    this->bShowOptionPips = false;
    this->PreviousButton = NULL;
    this->NextButton = NULL;
    this->LeftArrowImage = NULL;
    this->RightArrowImage = NULL;
    this->OptionTextBlock = NULL;
    this->OptionPips = NULL;
}


