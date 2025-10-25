#include "TextBlockBase.h"

UTextBlockBase::UTextBlockBase() {
    this->bIsVariable = false;
    this->bOverrideGuiText = false;
    this->bAutoFormatText = false;
    this->TextFormatTokenName = TEXT("Text");
    this->MinDesiredWidth = 0.00f;
    this->bConvertToUpper = false;
    this->MaxFontScaling = 10;
    this->bWrapWithInvalidationPanel = false;
    this->bUseShadowOffset = true;
    this->bUseOutline = false;
    this->TextScalingType = ETextScalingType::EStandardFontScaling;
    this->InitialFontSize = 0;
}

void UTextBlockBase::UseTextStyleShadowOffset(bool bShouldUse) {
}

void UTextBlockBase::UseTextStyleOutline(bool bShouldUse) {
}

void UTextBlockBase::SetTextWithLengthLimit(const FString& InString, const int32 MaxLen) {
}

void UTextBlockBase::SetTextByLocString(const FLocString& LocString) {
}

void UTextBlockBase::SetText(const FString& InString) {
}

void UTextBlockBase::SetShadowOffset(FVector2D InShadowOffset) {
}

void UTextBlockBase::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UTextBlockBase::SetOutline(FFontOutlineSettings OutlineSettings) {
}

void UTextBlockBase::SetOpacity(float InOpacity) {
}

void UTextBlockBase::SetMinDesiredWidth(float NewMinDesiredWidth) {
}

void UTextBlockBase::SetFont(FSlateFontInfo InFontInfo) {
}

void UTextBlockBase::SetColorOverride(EIndianaUIColorType ColorOverride) {
}

void UTextBlockBase::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UTextBlockBase::ResetColorOverride() {
}

bool UTextBlockBase::IsEmpty() const {
    return false;
}

FText UTextBlockBase::GetText() const {
    return FText::GetEmpty();
}

FSlateFontInfo UTextBlockBase::GetFont() const {
    return FSlateFontInfo{};
}

UMaterialInstanceDynamic* UTextBlockBase::GetDynamicOutlineMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* UTextBlockBase::GetDynamicFontMaterial() {
    return NULL;
}

FSlateColor UTextBlockBase::GetColorAndOpacity() const {
    return FSlateColor{};
}


