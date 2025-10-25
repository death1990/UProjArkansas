#include "StatusEffectTagEntryWidget.h"

UStatusEffectTagEntryWidget::UStatusEffectTagEntryWidget() {
    this->StatusEffectImage = NULL;
    this->MaskShiftParamName = TEXT("MaskShift");
    this->IsDebuffParamName = TEXT("ShowAsDebuff");
    this->IconTextureParameterName = TEXT("IconTexture");
    this->OnFilledAnimation = NULL;
    this->TimeRemainingImage = NULL;
    this->FillValueParamName = TEXT("FillValue");
    this->PrimaryColorParamName = TEXT("Bar Color");
    this->SecondaryColorParamName = TEXT("Glow Color");
    this->bUseFillResolution = false;
    this->FillResolutionDelta = 0.05f;
    this->bNormalizeTimeRemaining = false;
    this->NormalizedTimeRemainingThreshold = 5.00f;
    this->TimeRemainingDisplay = NULL;
    this->TimeRemainingText = NULL;
    this->bShowMinimumTimeRemaining = false;
    this->MinimumTimeRemainingThreshold = 2.50f;
    this->FinalCountdown = NULL;
    this->FinalCountdownAnimThreshold = 2.50f;
    this->StatusEffectMaterialInstance = NULL;
    this->TimeRemainingMaterialInstance = NULL;
}


