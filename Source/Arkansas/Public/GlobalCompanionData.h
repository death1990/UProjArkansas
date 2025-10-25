#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESpecialObsidianID.h"
#include "WantsToTalkGlobalVariables.h"
#include "GlobalCompanionData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UGlobalCompanionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialObsidianID, FWantsToTalkGlobalVariables> CompanionWantsToTalkGlobalVariables;
    
    UGlobalCompanionData();

};

