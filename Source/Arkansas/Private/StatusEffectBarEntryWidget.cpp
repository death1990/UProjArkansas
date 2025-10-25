#include "StatusEffectBarEntryWidget.h"

UStatusEffectBarEntryWidget::UStatusEffectBarEntryWidget() {
    this->StatusEffectImage = NULL;
    this->BulbImage = NULL;
    this->DisplayParent = NULL;
    this->bAnimInProgress = false;
}

void UStatusEffectBarEntryWidget::OnFadeOutComplete() {
}

void UStatusEffectBarEntryWidget::OnAnimsComplete() {
}


