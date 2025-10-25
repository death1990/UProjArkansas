#include "LandingPageButtonWidget.h"

ULandingPageButtonWidget::ULandingPageButtonWidget() {
    this->HeaderTextBlock = NULL;
    this->SubheaderTextBlock = NULL;
    this->DisabledTextBlock = NULL;
    this->Button = NULL;
    this->BackingImage = NULL;
    this->InterestPanel = NULL;
    this->InterestTextBlock = NULL;
    this->ActiveImage = NULL;
    this->bOnlyShowDisabledWhenHovered = false;
    this->bOverrideDescriptionWrap = false;
    this->WrapTextOverride = 0.00f;
    this->DesiredState = EWorkbenchState::ELandingPage;
}


