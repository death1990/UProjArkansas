#pragma once
#include "CoreMinimal.h"
#include "BaseTeamData.h"
#include "EDefaultRelationshipType.h"
#include "TeamRelationship.h"
#include "Templates/SubclassOf.h"
#include "TeamData.generated.h"

class UFactionData;
class UTeamData;

UCLASS(Blueprintable)
class ARKANSAS_API UTeamData : public UBaseTeamData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFactionData> Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefaultRelationshipType DefaultRelationshipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> HostileTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> NeutralTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> FriendlyTeams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTeamData>, FTeamRelationship> TeamRelationships;
    
public:
    UTeamData();

};

