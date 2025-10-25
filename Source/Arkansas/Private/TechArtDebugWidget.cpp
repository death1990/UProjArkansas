#include "TechArtDebugWidget.h"

UTechArtDebugWidget::UTechArtDebugWidget() {
    this->bShouldPauseGame = false;
    this->bShouldLogCommands = false;
    this->MainCanvasPanel = NULL;
}

void UTechArtDebugWidget::SendConsoleCommand(const FString& CommandIn) {
}


