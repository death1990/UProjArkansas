#include "TeamComponent.h"
#include "Templates/SubclassOf.h"

UTeamComponent::UTeamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bFactionCritical = false;
}

void UTeamComponent::SetTeam(TSubclassOf<UTeamData> InTeamData) {
}

void UTeamComponent::SetRelationshipToPlayer(TEnumAsByte<ETeamAttitude::Type> InRelationship, EChangeRelationshipSource InSource, ECrimeType InCrimeType) {
}

void UTeamComponent::OnSetStasis(AActor* StasisActor, bool bIsInStasis, bool bTemporaryStasis) {
}

void UTeamComponent::OnKilled(UHealthComponent* HealthComponent, FCauseDamageInfo CDI) {
}

bool UTeamComponent::IsOnTeam(TSubclassOf<UTeamData> InTeamData) const {
    return false;
}

TSubclassOf<UTeamData> UTeamComponent::GetTeamData() const {
    return NULL;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetRelationshipWithTeam(TSubclassOf<UTeamData> InTeamData) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetRelationshipWithPlayer() const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetRelationship(const AActor* InActor) const {
    return ETeamAttitude::Friendly;
}

void UTeamComponent::ClearRelationshipToPlayer(EChangeRelationshipSource InSource) {
}

void UTeamComponent::BPSetRelationshipToPlayer(AIndianaAiCharacter* Character, TEnumAsByte<ETeamAttitude::Type> Relationship) {
}

void UTeamComponent::BPClearRelationshipToPlayer(AIndianaAiCharacter* Character) {
}


