#include "RPGInteractionEntryWidget.h"

URPGInteractionEntryWidget::URPGInteractionEntryWidget() {
    this->bApplyNegativeTintToCount = true;
    this->bSimplifyFormatForSingleItemCount = false;
    this->PreFormatString = TEXT("(");
    this->PostFormatString = TEXT(")");
    this->ItemCountTextBlock = NULL;
    this->BGSwitcher = NULL;
    this->PositiveBG = NULL;
    this->NegativeBG = NULL;
}


