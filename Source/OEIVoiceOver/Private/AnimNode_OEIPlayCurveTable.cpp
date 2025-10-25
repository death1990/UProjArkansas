#include "AnimNode_OEIPlayCurveTable.h"

FAnimNode_OEIPlayCurveTable::FAnimNode_OEIPlayCurveTable() {
    this->Strength = 0.00f;
    this->Alpha = 0.00f;
    this->InverseAlpha = false;
    this->CurveTable = NULL;
    this->Loop = false;
}

