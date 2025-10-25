#include "HUDFactionPromptWidget.h"

UHUDFactionPromptWidget::UHUDFactionPromptWidget() {
    this->bOnlyShowEncounterFactionsOnceEncountered = true;
    this->bIgnoreReputationChangesForFactionsKillOnSight = true;
    this->bQueueMatchingFactionChanges = true;
    this->BountyIntro = NULL;
    this->ReputationNotification = NULL;
    this->BountyNotification = NULL;
    this->BarAnimationSound = NULL;
}


