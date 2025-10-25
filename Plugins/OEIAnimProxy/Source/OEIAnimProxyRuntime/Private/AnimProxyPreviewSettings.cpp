#include "AnimProxyPreviewSettings.h"

FAnimProxyPreviewSettings::FAnimProxyPreviewSettings() {
    this->AnimProxyDataIndex = 0;
    this->PositionalDataIndex = 0;
    this->PreviewPct = 0.00f;
    this->PreviewAnim = EAnimProxyPreviewAnimType::Idle;
}

