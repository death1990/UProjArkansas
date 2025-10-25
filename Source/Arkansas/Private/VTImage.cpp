#include "VTImage.h"

UVTImage::UVTImage() {
    this->Texture = NULL;
    this->VTDisplayScale = 1.00f;
    this->bUseAbsoluteVTDisplayOffset = false;
    this->bUseNormalizedVTDisplayOffset = false;
    this->bClipVTToWidgetSize = false;
    this->bRequestVTTilesOnTick = false;
}

void UVTImage::SetVTDisplayScale(float InScale) {
}

void UVTImage::SetVTDisplayOffset(const FVector2D& InOffset) {
}

void UVTImage::SetVTDefaultSize(const FVector2D& InSize) {
}

void UVTImage::SetUseNormalizedVTDsiplayOFfset(bool bInUseNormalizedVTDsiplayOFfset) {
}

void UVTImage::SetUseAbsoluteVTDsiplayOFfset(bool bInUseAbsoluteVTDsiplayOffset) {
}

void UVTImage::SetTextureUVRegion(const FBox2f& InUVRegion) {
}

void UVTImage::SetTexture(UTexture2D* InTexture) {
}

void UVTImage::SetRequestVTTilesOnTick(bool bInRequestVTTilesOnTick) {
}

void UVTImage::SetOpacity(float InOpacity) {
}

void UVTImage::SetDesiredSize(const FVector2D& InSize) {
}

void UVTImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UVTImage::SetClipVTToWidgetSize(bool bClip) {
}


