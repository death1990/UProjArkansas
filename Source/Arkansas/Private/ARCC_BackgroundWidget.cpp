#include "ARCC_BackgroundWidget.h"

UARCC_BackgroundWidget::UARCC_BackgroundWidget() {
    this->BackgroundItemEntryClass = NULL;
    this->bApplyDefaultSelection = true;
    this->bRandomlySelectBackground = true;
    this->DefaultAptitudeClass = NULL;
    this->BackgroundSummaryContainer = NULL;
    this->BackgroundFlavorTextBlock = NULL;
    this->BackgroundDescTextblock = NULL;
    this->BackgroundTitleTextblock = NULL;
    this->BackgroundIcon = NULL;
    this->ScrollBox = NULL;
    this->TransitionTextHideAnim = NULL;
    this->TransitionTextShowAnim = NULL;
}

void UARCC_BackgroundWidget::OnTransitionTextAnimComplete() {
}


