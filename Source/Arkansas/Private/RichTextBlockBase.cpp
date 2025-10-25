#include "RichTextBlockBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

URichTextBlockBase::URichTextBlockBase() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->TextStyleSet = NULL;
    this->TokenReplacements = NULL;
    this->bOverrideDefaultStyle = false;
    this->MinDesiredWidth = 0.00f;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->bConvertToUpper = false;
}

void URichTextBlockBase::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
}

void URichTextBlockBase::SetTextStyleSet(UDataTable* NewTextStyleSet) {
}

void URichTextBlockBase::SetText(const FText& InText) {
}

void URichTextBlockBase::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void URichTextBlockBase::SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle) {
}

void URichTextBlockBase::SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush) {
}

void URichTextBlockBase::SetDefaultShadowOffset(FVector2D InShadowOffset) {
}

void URichTextBlockBase::SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void URichTextBlockBase::SetDefaultFont(FSlateFontInfo InFontInfo) {
}

void URichTextBlockBase::SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void URichTextBlockBase::SetAutoWrapText(bool InAutoTextWrap) {
}

FText URichTextBlockBase::GetText() const {
    return FText::GetEmpty();
}

URichTextBlockDecoratorBase* URichTextBlockBase::GetDecoratorByClass(TSubclassOf<URichTextBlockDecoratorBase> DecoratorClass) {
    return NULL;
}

void URichTextBlockBase::ClearAllDefaultStyleOverrides() {
}


