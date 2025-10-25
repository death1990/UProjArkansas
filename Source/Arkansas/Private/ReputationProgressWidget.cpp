#include "ReputationProgressWidget.h"

UReputationProgressWidget::UReputationProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ArrowPadding = 0;
    this->ReputationSectionSize = 24;
    this->TotalReputationSections = 7;
    this->RepBarPanel = NULL;
    this->ArrowMarker = NULL;
    this->BarImage = NULL;
    this->AbrasiveDisplay = NULL;
    this->WittyDisplay = NULL;
    this->HexOverlays = NULL;
    this->Neg3Text = NULL;
    this->Neg2Text = NULL;
    this->Neg1Text = NULL;
    this->NeutralTextBlock = NULL;
    this->Pos1Text = NULL;
    this->Pos2Text = NULL;
    this->Pos3Text = NULL;
    this->Neg3Highlight = NULL;
    this->Neg3Idle = NULL;
    this->Neg2Highlight = NULL;
    this->Neg2Idle = NULL;
    this->Neg1Highlight = NULL;
    this->Neg1Idle = NULL;
    this->NeutralHighlight = NULL;
    this->NeutralIdle = NULL;
    this->Pos1Highlight = NULL;
    this->Pos1Idle = NULL;
    this->Pos2Highlight = NULL;
    this->Pos2Idle = NULL;
    this->Pos3Highlight = NULL;
    this->Pos3Idle = NULL;
    this->AbrasiveParameter = TEXT("AbrasiveEnabled");
    this->WittyParameter = TEXT("WittyEnabled");
    this->CurrentStandingText = NULL;
}

void UReputationProgressWidget::OnHighlightFinished() {
}


