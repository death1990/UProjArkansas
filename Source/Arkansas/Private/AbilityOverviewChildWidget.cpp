#include "AbilityOverviewChildWidget.h"

UAbilityOverviewChildWidget::UAbilityOverviewChildWidget() {
    this->AbilityProgressBar = NULL;
    this->AbilityContainerOverlay = NULL;
    this->PulseDuration = 0.35f;
    this->PulseInterpExponent = 2.00f;
    this->FadeOutThreshold = 0.75f;
    this->AbilityPosition = EAbilityPosition::Bottom;
}



