#include "QuestIconImage.h"

UQuestIconImage::UQuestIconImage() {
    this->bUseStaticInits = false;
    this->bShowAsActive = false;
    this->bShowAsArea = false;
    this->bShowAsCompact = false;
    this->bShowAsPulsing = false;
    this->ActiveParam = TEXT("Active");
    this->AreaParam = TEXT("Area");
    this->CompactParam = TEXT("Compact");
    this->CompleteParam = TEXT("Complete");
    this->FailedParam = TEXT("failed");
    this->InvalidParam = TEXT("Invalid");
    this->OptionalParam = TEXT("Optional");
    this->PulsingParam = TEXT("Pulsing");
    this->TravelParam = TEXT("Travel");
    this->QuestTypeParam = TEXT("QuestType");
    this->QuestIconOverrideValue = -1.00f;
    this->QuestIcon = NULL;
}

void UQuestIconImage::SetIsTravel(bool bIsTravel) {
}

void UQuestIconImage::SetIsPulsing(bool bIsPulsing) {
}

void UQuestIconImage::SetIsOptional(bool bIsOptional) {
}

void UQuestIconImage::SetIsInvalid(bool bIsInvalid) {
}

void UQuestIconImage::SetIsFailed(bool bIsFailed) {
}

void UQuestIconImage::SetIsComplete(bool bIsComplete) {
}

void UQuestIconImage::SetIsCompact(bool bIsCompact) {
}

void UQuestIconImage::SetIsArea(bool bIsArea) {
}

void UQuestIconImage::SetIsActive(bool bIsActive) {
}


