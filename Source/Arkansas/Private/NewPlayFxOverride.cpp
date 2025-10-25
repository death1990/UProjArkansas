#include "NewPlayFxOverride.h"

FNewPlayFxOverride::FNewPlayFxOverride() {
    this->ValueType = EFxOverrideType::Bool;
    this->bValue = false;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->StaticMeshValue = NULL;
    this->MaterialValue = NULL;
    this->bMirroredVectorForPlayer = false;
}

