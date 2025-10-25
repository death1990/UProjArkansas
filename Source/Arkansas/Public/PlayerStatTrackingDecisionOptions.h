#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TrackedDecisionSet.h"
#include "PlayerStatTrackingDecisionOptions.generated.h"

UCLASS(Blueprintable)
class UPlayerStatTrackingDecisionOptions : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTrackedDecisionSet> TrackedDecisions;
    
public:
    UPlayerStatTrackingDecisionOptions();

};

