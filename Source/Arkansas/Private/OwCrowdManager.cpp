#include "OwCrowdManager.h"

AOwCrowdManager::AOwCrowdManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AOwCrowdManager::MarkProxiesAroundLocationUsable(FVector Location, float Radius, bool Usable) {
}

void AOwCrowdManager::MarkProxiesAroundCapsuleUsable(FVector Start, FVector End, float Radius, bool Usable) {
}

void AOwCrowdManager::MakeCrowdCharactersFleeFromLocation(FVector Location, float Radius) {
}

void AOwCrowdManager::MakeCrowdCharactersFleeFromCapsule(FVector Start, FVector End, float Radius) {
}

float AOwCrowdManager::K2_GetTimeSinceCrowdLastWitnessedCrime(bool& bValid) {
    return 0.0f;
}

float AOwCrowdManager::K2_GetTimeSinceCrowdLastDetectedPlayer(bool& bValid) {
    return 0.0f;
}

FGuid AOwCrowdManager::K2_GetCrowdLastWitnessedCrimeID() {
    return FGuid{};
}

FVector AOwCrowdManager::K2_GetCrowdLastDetectedPlayerLocation(bool& bValid) {
    return FVector{};
}


