#include "NavigationGroupWidget.h"

UNavigationGroupWidget::UNavigationGroupWidget() {
    this->bUseOverrideEntries = false;
    this->EntryContainer = NULL;
    this->PreviousInputWidget = NULL;
    this->NextInputWidget = NULL;
    this->ContainerSizeBox = NULL;
    this->ContainerScrollBox = NULL;
    this->LeftArrowButton = NULL;
    this->RightArrowButton = NULL;
    this->ButtonGroup = NULL;
    this->EntryClass = NULL;
    this->bAllowLooping = true;
}


