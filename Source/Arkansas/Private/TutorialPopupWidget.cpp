#include "TutorialPopupWidget.h"

UTutorialPopupWidget::UTutorialPopupWidget() {
    this->BGAlpha = NULL;
    this->StyleContainerOverlay = NULL;
    this->TutorialPrompt = NULL;
    this->TutorialInputLabel = NULL;
    this->CachedCurrentTutorialWidget = NULL;
}

bool UTutorialPopupWidget::IsFlawTutorial() const {
    return false;
}


