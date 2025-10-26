#pragma once
#include "CoreMinimal.h"
#include <AITypes.h>

#include "CrowdPathingData.generated.h"

USTRUCT(BlueprintType)
struct OEICROWDMANAGERRUNTIME_API FCrowdPathingData {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIMoveRequest PendingMoveRequest;
    
    FCrowdPathingData();
};

