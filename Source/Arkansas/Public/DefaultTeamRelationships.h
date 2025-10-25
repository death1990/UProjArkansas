#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DefaultTeamRelationships.generated.h"

class UBaseTeamData;

USTRUCT(BlueprintType)
struct FDefaultTeamRelationships {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> HostileTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> NeutralTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UBaseTeamData>> FriendlyTeams;
    
    ARKANSAS_API FDefaultTeamRelationships();
};

