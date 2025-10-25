#include "GenericCollapsableList.h"

UGenericCollapsableList::UGenericCollapsableList() {
    this->ListEntryClass = NULL;
    this->NewEntryWidget = NULL;
    this->TitleTextBlock = NULL;
    this->ExpandableArea = NULL;
    this->EntryContainer = NULL;
}

void UGenericCollapsableList::ExpandableAreaExpansionChanged(UExpandableAreaBase* Area, bool bIsExpanded) {
}


