#include "OEITextSettings.h"

UOEITextSettings::UOEITextSettings() {
    this->DefaultLanguageCode = TEXT("enus");
    this->DefaultVOLanguageCode = TEXT("en");
    this->bSupportsDialects = true;
    this->StringTokenBundles.AddDefaulted(1);
    this->SupportedVOLanguageCodes.AddDefaulted(1);
}


