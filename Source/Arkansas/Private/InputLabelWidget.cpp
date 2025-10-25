#include "InputLabelWidget.h"

UInputLabelWidget::UInputLabelWidget() {
    this->bDisplayKeyboardMouse = false;
    this->bDisplayGamepad = true;
    this->bDisplayActionText = true;
    this->bUseActionDisplay = true;
    this->bOverrideDescriptionColor = true;
    this->OverrideDisplayColor = EIndianaUIColorType::IndianaNotQuiteYellow;
    this->bDisplayTheftActions = true;
    this->TheftDisplayColor = EIndianaUIColorType::IndianaRed;
    this->bHighlightIndefinitely = false;
    this->bIsNavigationPrompt = false;
    this->HoldWidget = NULL;
    this->ActionTextBlock = NULL;
    this->ActionDisplay = NULL;
    this->CallbackButton = NULL;
    this->OnHighlight = NULL;
    this->OnUnhighlight = NULL;
}


