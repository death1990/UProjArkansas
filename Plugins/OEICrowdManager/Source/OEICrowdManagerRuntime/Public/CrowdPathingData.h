#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIMoveRequest -FallbackName=AIMoveRequest
#include "CrowdPathingData.generated.h"

USTRUCT(BlueprintType)
struct OEICROWDMANAGERRUNTIME_API FCrowdPathingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIMoveRequest PendingMoveRequest;
    
    FCrowdPathingData();
};

