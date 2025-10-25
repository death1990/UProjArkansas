#include "CoverNode.h"

ACoverNode::ACoverNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Height = 0.00f;
    this->WallThickness = 100.00f;
    this->SlotRadius = 0.00f;
    this->CoverType = ECoverTypes::FullHeight;
    this->ClockWiseWallTheta = 0.00f;
    this->CounterClockWiseWallTheta = 0.00f;
    this->ClockWiseFireTheta = 0.00f;
    this->CounterClockWiseFireTheta = 0.00f;
    this->bLocked = false;
    this->bHasFiringArc = true;
    this->bHasCorner = false;
    this->Tier = 0.00f;
    this->LeftCornerDistance = 0.00f;
    this->RightCornerDistance = 0.00f;
    this->bIsCoverInStasis = false;
    this->bIsValidCover = true;
    this->bIsDynamicCover = false;
    this->ScoreFactor = 1.00f;
    this->bIsDestroyed = false;
}

void ACoverNode::SetVaultPoints(AIndianaAiCharacter* Character, UAnimMontage* AnimMontage, FVector Point) {
}

void ACoverNode::SetNearbyCoverType(AActor* Actor, FVector Extents, ECoverTypes NewCoverType) {
}

void ACoverNode::SetNearbyCoverEnabled(AActor* DestroyedActor, FVector Extents, bool bEnabled) {
}

void ACoverNode::SetCoverType(ECoverTypes NewCoverType) {
}

void ACoverNode::PickFilteredCoverAction(AIndianaAiCharacter* Character, bool& Success, ECoverActions& CoverAction, ECoverActions FilteredAction) {
}

bool ACoverNode::PickCoverIdle(AIndianaAiCharacter* Character, FCoverIdleAnim& OutAnim) {
    return false;
}

void ACoverNode::PickCoverAction(AIndianaAiCharacter* Character, bool& Success, ECoverActions& CoverAction, ECoverActions PreferredAction) {
}

bool ACoverNode::IsValidFiringVision(AIndianaCharacter* InOccupier, AIndianaCharacter* InTarget) const {
    return false;
}

bool ACoverNode::IsValidFiringAngle(const FVector& TargetLocation) const {
    return false;
}

bool ACoverNode::IsValidCoverHidden(AIndianaCharacter* InOccupier, AIndianaCharacter* InTarget, bool bDebug) const {
    return false;
}

bool ACoverNode::IsValidCoverForController(AIndianaAiController* Controller) const {
    return false;
}

bool ACoverNode::IsValidCoverAngle(const FVector& TargetLocation) const {
    return false;
}

bool ACoverNode::IsValidCover() const {
    return false;
}

bool ACoverNode::IsOutflanked(const FVector& TargetLocation) const {
    return false;
}

bool ACoverNode::HasFiringArc() const {
    return false;
}

bool ACoverNode::HasCorner() {
    return false;
}

FVector ACoverNode::GetWallPoint() const {
    return FVector{};
}

FVector ACoverNode::GetWallAttachPoint(AIndianaCharacter* Character) {
    return FVector{};
}

FVector ACoverNode::GetWallAngle() const {
    return FVector{};
}

void ACoverNode::GetVaultPoint(AIndianaAiCharacter* Character, bool& bHasPoint, FVector& Point) {
}

float ACoverNode::GetSlotRadius() const {
    return 0.0f;
}

FVector ACoverNode::GetScanStartPos() const {
    return FVector{};
}

FVector ACoverNode::GetFiringPointChar(AIndianaCharacter* Character) const {
    return FVector{};
}

FVector ACoverNode::GetFiringPoint() const {
    return FVector{};
}

FVector ACoverNode::GetFiringAngle() const {
    return FVector{};
}

void ACoverNode::GetCoverWallThetas(float& OutClockWiseWallTheta, float& NewCounterClockWiseWallTheta) {
}

ECoverTypes ACoverNode::GetCoverType() const {
    return ECoverTypes::FullHeight;
}

ECoverSide ACoverNode::GetCoverSide() {
    return ECoverSide::None;
}

void ACoverNode::GetCoverFireThetas(float& OutClockWiseWallTheta, float& OutCounterClockWiseWallTheta) {
}

FVector ACoverNode::GetCornerPosition() {
    return FVector{};
}

FVector ACoverNode::GetActionLocation(AIndianaCharacter* Character, ECoverActions Action, float Offset) const {
    return FVector{};
}

float ACoverNode::FiringArcScore(FVector TargetPos) const {
    return 0.0f;
}

void ACoverNode::FireScanYaw() {
}

void ACoverNode::FireScanDepthBuffer() {
}

void ACoverNode::EnableNearbyCover(AActor* DestroyedActor, FVector Extents) {
}

void ACoverNode::EnableCover() {
}

void ACoverNode::DisableNearbyCover(AActor* DestroyedActor, FVector Extents) {
}

void ACoverNode::DisableCover() {
}

void ACoverNode::DebugCoverOwnership(AActor* Actor) {
}

bool ACoverNode::CheckFireVolume(FVector TargetPos, bool DefaultValue) const {
    return false;
}


