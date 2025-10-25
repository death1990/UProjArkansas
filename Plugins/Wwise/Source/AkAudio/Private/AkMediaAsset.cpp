#include "AkMediaAsset.h"

UAkMediaAsset::UAkMediaAsset() {
    this->ID = 0;
    this->AutoLoad = true;
    this->Duration = 0.00f;
    this->Language = TEXT("SFX");
    this->CurrentMediaAssetData = NULL;
}


