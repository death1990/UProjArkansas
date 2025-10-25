#include "AwarenessIndicatorEntryWidget.h"

UAwarenessIndicatorEntryWidget::UAwarenessIndicatorEntryWidget() {
    this->NormalizedMinimumInvestigationAwareness = 0.10f;
    this->UnawareOverlay = NULL;
    this->UnawareFillBar = NULL;
    this->OnUnaware = NULL;
    this->SuspicionOverlay = NULL;
    this->SuspiciousFillBar = NULL;
    this->OnSuspicious = NULL;
    this->InvestigationOverlay = NULL;
    this->InvestigationFillBar = NULL;
    this->OnInvestigating = NULL;
    this->AlertedOverlay = NULL;
    this->OnAlertedAnim = NULL;
}

void UAwarenessIndicatorEntryWidget::OnAlertAnimComplete() {
}


