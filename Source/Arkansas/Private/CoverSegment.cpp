#include "CoverSegment.h"
#include "CoverSegmentComponent.h"

ACoverSegment::ACoverSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoverSegmentComponent = CreateDefaultSubobject<UCoverSegmentComponent>(TEXT("CoverSegment"));
    this->bIsDegenerate = false;
    this->HasLeftCorner = false;
    this->HasRightCorner = false;
    this->LeftDot = 0.00f;
    this->RightDot = 0.00f;
    this->Width = 0.00f;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
    this->bHasPathEdge = false;
    this->bFullHeight = false;
    this->bHalfHeight = false;
}

FVector ACoverSegment::GetHidePosition(AIndianaAiCharacter* Character, AActor* Threat) {
    return FVector{};
}


