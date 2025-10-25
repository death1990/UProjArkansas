#include "CustomMaterialModVisual.h"

UCustomMaterialModVisual::UCustomMaterialModVisual() {
    this->bApplyToBase = true;
    this->bApplyToChildren = true;
}

void UCustomMaterialModVisual::CopyParamOverrides(UMaterialInstanceDynamic* Source, FName DestinationSlotName) {
}

void UCustomMaterialModVisual::ApplyVectorParamToAll(FName ParamName, FLinearColor ParamValue, FName OnlyApplyIfParamSet) {
}

void UCustomMaterialModVisual::ApplyVectorParam(FName MaterialSlotName, FName ParamName, FLinearColor ParamValue) {
}

void UCustomMaterialModVisual::ApplyTextureParamToAll(FName ParamName, TSoftObjectPtr<UTexture> ParamValue, FName OnlyApplyIfParamSet) {
}

void UCustomMaterialModVisual::ApplyTextureParam(FName MaterialSlotName, FName ParamName, TSoftObjectPtr<UTexture> ParamValue) {
}

void UCustomMaterialModVisual::ApplyScalarParamToAll(FName ParamName, float ParamValue, FName OnlyApplyIfParamSet) {
}

void UCustomMaterialModVisual::ApplyScalarParam(FName MaterialSlotName, FName ParamName, float ParamValue) {
}



