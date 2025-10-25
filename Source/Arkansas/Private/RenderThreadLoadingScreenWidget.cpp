#include "RenderThreadLoadingScreenWidget.h"

URenderThreadLoadingScreenWidget::URenderThreadLoadingScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SecondsBetweenImages = 8.00f;
    this->SecondsBetweenTips = 8.00f;
    this->MascotTimeParamName = TEXT("LinearTime");
    this->MascotScaleParamName = TEXT("TimeScale");
    this->DefaultTimeScale = 0.67f;
    this->AnimatingMascot = NULL;
    this->LoadingImage = NULL;
    this->BlockerImage = NULL;
    this->TipTextBlock = NULL;
    this->InputLabel = NULL;
    this->SecondaryInputLabel = NULL;
    this->TipPanelWidget = NULL;
    this->SubtitleBacker = NULL;
    this->InputLabelPanelWidget = NULL;
    this->LeftAnchorImage = NULL;
    this->RightAnchorImage = NULL;
    this->MascotFBTexturePtr = NULL;
    this->MascotFBMaterialPtr = NULL;
    this->MascotFBInstancePtr = NULL;
    this->AnimatingMascotMaterial = NULL;
}


