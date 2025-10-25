#include "FlipbookWidget.h"

UFlipbookWidget::UFlipbookWidget() {
    this->DynamicMaterial = NULL;
    this->FlipbookData = NULL;
    this->MaterialInterface = NULL;
    this->DisplayImage = NULL;
}

bool UFlipbookWidget::IsPlaying() const {
    return false;
}

void UFlipbookWidget::EndPlay() {
}

void UFlipbookWidget::BeginPlay(bool bInShouldLoop, int32 PlayFromFrame) {
}


