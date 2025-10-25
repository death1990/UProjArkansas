#include "MinimapQuestBeaconWidget.h"

UMinimapQuestBeaconWidget::UMinimapQuestBeaconWidget() {
    this->GlowPadding = 9.00f;
    this->AreaBeaconActiveParamName = TEXT("ShowActive");
    this->AreaImage = NULL;
    this->BeaconIcon = NULL;
    this->BeaconOverlay = NULL;
}

void UMinimapQuestBeaconWidget::OnDeactivateAnimFinished() {
}


