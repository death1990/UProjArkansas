#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DefaultTeamRelationships.h"
#include "Templates/SubclassOf.h"
#include "GlobalTeamData.generated.h"

class UTeamData;

UCLASS(Blueprintable)
class UGlobalTeamData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTeamData> PlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultTeamRelationships DefaultTeamRelationships;
    
    UGlobalTeamData();

};

