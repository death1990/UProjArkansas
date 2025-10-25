#include "PageDimensions.h"

FPageDimensions::FPageDimensions() {
    this->VerticalIndent = 0;
    this->Rows = 0;
    this->bOverrideColumnsForCategory = false;
    this->OverrideColumns = 0;
    this->bAllowDownPageNavigation = false;
    this->bAllowLeftWrapNavigation = false;
    this->bAllowRightWrapNavigation = false;
}

