#include "TitleCardDataAsset.h"

UTitleCardDataAsset::UTitleCardDataAsset() {
    this->PrimaryStringDisplayTime = -1.00f;
    this->SecondaryStringDisplayTime = -1.00f;
    this->TertiaryStringDisplayTime = -1.00f;
    this->ContainerAlignment = EContainerAlignment::ETopLeft;
    this->TextAlignment = ETextAlignment::ELeftAligned;
    this->HorizontalInsetPercentage = 0.02f;
    this->VerticalInsetPercentage = 0.03f;
    this->bUsesBlackBarSequence = false;
    this->BlackBarAnimTime = 1.00f;
    this->FontStyles = NULL;
}


