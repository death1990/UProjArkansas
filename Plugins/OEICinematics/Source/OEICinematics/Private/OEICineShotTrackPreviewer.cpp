#include "OEICineShotTrackPreviewer.h"
#include "OEICineShotTrackPreviewComponent.h"
#include "OEICinematicCameraModifier.h"

AOEICineShotTrackPreviewer::AOEICineShotTrackPreviewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewComponent = CreateDefaultSubobject<UOEICineShotTrackPreviewComponent>(TEXT("ShotTrackPreviewComponent"));
    this->PreviewModifier = CreateDefaultSubobject<UOEICinematicCameraModifier>(TEXT("PreviewCameraModifier"));
    this->TargetVisualizationComponent = NULL;
}


