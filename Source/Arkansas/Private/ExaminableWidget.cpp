#include "ExaminableWidget.h"

UDEPRECATED_ExaminableWidget::UDEPRECATED_ExaminableWidget() {
    this->bStopOnlyGameInput = true;
    this->GamepadZoomMultiplier = 1.00f;
    this->FadeOutPlaybackSpeed = 1.00f;
    this->bForceCloseOnRepeatedInput = true;
    this->TitleTextBlock = NULL;
    this->BodyTextblock = NULL;
    this->InvisibleButton = NULL;
    this->ScrollBox = NULL;
    this->RPGInteractableVBox = NULL;
    this->RPGInteractionContainer1 = NULL;
    this->RPGInteractionContainer2 = NULL;
    this->RPGInteractionContainer3 = NULL;
    this->InputLabelGroup = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
}

void UDEPRECATED_ExaminableWidget::OnFadeOutFinished() {
}


