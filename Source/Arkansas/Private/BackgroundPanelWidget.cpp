#include "BackgroundPanelWidget.h"

UBackgroundPanelWidget::UBackgroundPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Border = NULL;
    this->BorderInner = NULL;
    this->InnerDefaultOpacity = 1.00f;
}

void UBackgroundPanelWidget::RegisterButtons(const TArray<UButtonBase*> Buttons) {
}




