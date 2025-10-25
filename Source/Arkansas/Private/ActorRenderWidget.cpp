#include "ActorRenderWidget.h"

UActorRenderWidget::UActorRenderWidget() {
    this->ActorStageClass = NULL;
    this->bRouteAnalogInput = true;
    this->bSetupInConstruction = true;
    this->bFlipHorizontally = false;
    this->bEnableZoomAction = true;
    this->bDisabledTickFreezesStage = false;
    this->ZoomFull = 0.80f;
    this->ZoomReduced = 0.40f;
    this->bZoomReduced = true;
    this->bCloseOnRightClick = false;
    this->WaitForUpdateFrameDelayCount = 0;
    this->ImageMaterial = NULL;
    this->bResizeRenderTargetWithResolution = true;
    this->RenderTargetSizeX = 512;
    this->RenderTargetSizeY = 512;
    this->RenderTargetFormat = RTF_RGBA8;
    this->Border = NULL;
    this->Image = NULL;
}

void UActorRenderWidget::OnMouseZoomOut() {
}

void UActorRenderWidget::OnMouseZoomIn() {
}

void UActorRenderWidget::OnGamepadToggleFullZoom() {
}

FEventReply UActorRenderWidget::OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}


