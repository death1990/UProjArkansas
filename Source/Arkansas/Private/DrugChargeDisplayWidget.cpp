#include "DrugChargeDisplayWidget.h"

UDrugChargeDisplayWidget::UDrugChargeDisplayWidget() {
    this->ChargeCountTextBlock = NULL;
    this->TopTextBlock1 = NULL;
    this->TopTextBlock2 = NULL;
    this->TopTextBlock3 = NULL;
    this->TopTextBlock4 = NULL;
    this->TopTextBlock5 = NULL;
    this->BottomTextBlock1 = NULL;
    this->BottomTextBlock2 = NULL;
    this->BottomTextBlock3 = NULL;
    this->BottomTextBlock4 = NULL;
    this->BottomTextBlock5 = NULL;
    this->CurrentChargeBar = NULL;
    this->AdditionalChargeBar = NULL;
    this->TextBlockMovement = 60.00f;
    this->AnimationDuration = 1.50f;
}


