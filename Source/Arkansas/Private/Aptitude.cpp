#include "Aptitude.h"

UAptitude::UAptitude() {
    this->Spells.AddDefaulted(1);
    this->UiDisplayImage = NULL;
    this->Filigree = NULL;
    this->Aptitude = EAptitudeType::Invalid;
}


