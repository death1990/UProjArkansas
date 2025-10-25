#include "TeamManager.h"
#include "Templates/SubclassOf.h"

UTeamManager::UTeamManager() {
}

void UTeamManager::BPSetRelationship(TSubclassOf<UBaseTeamData> SourceTeamData, TSubclassOf<UBaseTeamData> OtherTeamData, TEnumAsByte<ETeamAttitude::Type> Relationship, bool bMutual) {
}

TEnumAsByte<ETeamAttitude::Type> UTeamManager::BPGetRelationship(TSubclassOf<UTeamData> SourceTeamData, TSubclassOf<UTeamData> OtherTeamData) {
    return ETeamAttitude::Friendly;
}

TSubclassOf<UFactionData> UTeamManager::BPGetFactionDataFromTeam(const TSubclassOf<UTeamData>& TeamData) {
    return NULL;
}


