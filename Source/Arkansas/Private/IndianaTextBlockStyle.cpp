#include "IndianaTextBlockStyle.h"

FIndianaTextBlockStyle::FIndianaTextBlockStyle() {
    this->bOverrideAssetValues = false;
    this->ImportAsset = NULL;
    this->ColorOverride = EIndianaUIColorType::Invalid;
    this->bShouldAutoApplyFullTextHightlightForRTB = false;
}

