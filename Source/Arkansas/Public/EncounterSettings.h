#pragma once
#include "CoreMinimal.h"
#include "EEncounterAggroType.h"
#include "Templates/SubclassOf.h"
#include "EncounterSettings.generated.h"

class UTeamData;

USTRUCT(BlueprintType)
struct FEncounterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> TeamOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEncounterAggroType DefaultAggroType;
    
    ARKANSAS_API FEncounterSettings();
};

