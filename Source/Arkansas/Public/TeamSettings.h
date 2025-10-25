#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TeamSettings.generated.h"

class UTeamData;

USTRUCT(BlueprintType)
struct FTeamSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> TeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideEncounterTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> EncounterTeamData;
    
    ARKANSAS_API FTeamSettings();
};

