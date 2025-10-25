#include "CCCharacterCustomizationBaseWdgt.h"

UCCCharacterCustomizationBaseWdgt::UCCCharacterCustomizationBaseWdgt() {
    this->bRoundSliderToWhole = true;
    this->SliderClass = NULL;
    this->SubcategoryClass = NULL;
    this->DefaultCameraPosition = EARCC_CameraPosition::Background;
    this->DefaultCharacterRotation = EARCC_CharacterRotation::Front;
    this->EntryContainer = NULL;
    this->bIsTallPanel = true;
}


