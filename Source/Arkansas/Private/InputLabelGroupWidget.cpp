#include "InputLabelGroupWidget.h"

UInputLabelGroupWidget::UInputLabelGroupWidget() {
    this->InputLabelClass = NULL;
    this->EntryContainer = NULL;
    this->SecondRowEntryContainer = NULL;
    this->FrameHorizontalBox = NULL;
    this->bCollapseOnHide = false;
    this->bShowFramingImages = true;
    this->bCollapseFramingImagesWhenHidden = false;
    this->bShowOnlyUniqueIcons = false;
    this->bKeepVisibleWhenUnableToExecute = false;
    this->MostRecentInputLabel = NULL;
}


