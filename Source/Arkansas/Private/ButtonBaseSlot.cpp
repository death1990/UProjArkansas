#include "ButtonBaseSlot.h"

UButtonBaseSlot::UButtonBaseSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

void UButtonBaseSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UButtonBaseSlot::SetPadding(FMargin InPadding) {
}

void UButtonBaseSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}


