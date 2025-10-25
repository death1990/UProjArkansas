#include "ItemAddLossNotificationWidget.h"

UItemAddLossNotificationWidget::UItemAddLossNotificationWidget() {
    this->ContainerBorder = NULL;
    this->PlusMinusTextBlock = NULL;
    this->ItemNameTextBlock = NULL;
    this->ItemImage = NULL;
    this->ItemLossBorder = NULL;
    this->ItemGainBorder = NULL;
    this->PopupDisplayTime = 3.50f;
}


void UItemAddLossNotificationWidget::OnAnimSequenceComplete() {
}



