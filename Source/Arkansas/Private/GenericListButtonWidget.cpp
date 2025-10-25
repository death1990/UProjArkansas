#include "GenericListButtonWidget.h"

UGenericListButtonWidget::UGenericListButtonWidget() {
    this->ChildButton = NULL;
    this->ButtonTextBlock = NULL;
    this->OuterSizeBox = NULL;
    this->ButtonSizeBox = NULL;
}

UTextBlockBase* UGenericListButtonWidget::GetTextBlock() const {
    return NULL;
}


