#include "RadioEntryWidget.h"

URadioEntryWidget::URadioEntryWidget() {
    this->bChangeTextOpacityByAvailability = false;
    this->AvailableOpacity = 1.00f;
    this->UnavailableOpacity = 0.50f;
    this->MainButton = NULL;
    this->SelectedStationPanel = NULL;
    this->StationNameText = NULL;
    this->FactionImage = NULL;
}

void URadioEntryWidget::SetStationSelected(bool bIsSelected) {
}

void URadioEntryWidget::SetStationAvailable(bool bIsAvailable) {
}





bool URadioEntryWidget::IsSelected() const {
    return false;
}

bool URadioEntryWidget::IsAvailable() const {
    return false;
}

UBroadcastStationAsset* URadioEntryWidget::GetStation() const {
    return NULL;
}


