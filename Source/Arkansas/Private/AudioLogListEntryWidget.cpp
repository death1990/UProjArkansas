#include "AudioLogListEntryWidget.h"

UAudioLogListEntryWidget::UAudioLogListEntryWidget() {
    this->PlayTexture = NULL;
    this->StopTexture = NULL;
    this->LogHighlight = NULL;
}

void UAudioLogListEntryWidget::OnAudioLogPlayStateChanged(EAudioLogPlayState NewPlayState) {
}


