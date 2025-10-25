#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AwarenessIndicatorDataAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UAwarenessIndicatorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenUntrackedActorEvaluations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorIndicatorRevealRadius;
    
    UAwarenessIndicatorDataAsset();

};

