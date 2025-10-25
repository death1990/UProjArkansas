#include "NavLinkGenerationVolume.h"
#include "NavDataGenerationVolumeComponent.h"

ANavLinkGenerationVolume::ANavLinkGenerationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavDataGenerationVolumeComponent = CreateDefaultSubobject<UNavDataGenerationVolumeComponent>(TEXT("NavDataGenerationVolume"));
    this->bGenerateNewJumpAcrossNavLinks = false;
    this->bGenerateReverseNavLinks = true;
    this->bCheckForExistingNavLinks = true;
    this->bCheckForCollisionBlocked = true;
    this->bDebugDrawEdges = false;
    this->bSpawnDebugHelperActors = false;
    this->MinEdgeLengthOverride = 0.00f;
    this->EdgeSampleDistanceOverride = 0.00f;
    this->LinkSeparationDistanceOverride = 0.00f;
    this->MaxNavProjectDistanceOverride = 0.00f;
    this->SupportedTypes = 255;
    this->MinEdgeLength = 20.00f;
    this->EdgeSampleDistance = 33.33f;
    this->LinkSeparationDistance = 150.00f;
    this->MaxNavProjectDistance = 50.00f;
    this->CollisionProfileName = TEXT("Pawn");
    this->TypeMatchDistance = 100.00f;
    this->LadderMatchDistance = 100.00f;
    this->ParkourMaxWallProbeZIncrement = 25.00f;
    this->bNavLinkProfilesUseDefault = true;
    this->bEnableSurfaceValidation = false;
    this->NavDataGenerationVolumeComponent->SetupAttachment(RootComponent);
}

void ANavLinkGenerationVolume::RefreshDebugDisplay() {
}

void ANavLinkGenerationVolume::DeleteNavLinks() {
}

void ANavLinkGenerationVolume::DeleteDebugHelperActors() {
}

void ANavLinkGenerationVolume::DeleteAllNavLinks() {
}

void ANavLinkGenerationVolume::ClearDebugDraws() {
}

void ANavLinkGenerationVolume::BuildNavLinks() {
}

void ANavLinkGenerationVolume::AuditNavLinks() {
}


