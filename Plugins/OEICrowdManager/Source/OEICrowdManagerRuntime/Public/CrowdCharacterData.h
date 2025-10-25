#pragma once
#include "CoreMinimal.h"
#include "AnimProxyCharacterData.h"
#include "CrowdPathingData.h"
#include "EOEICrowdCharacterState.h"
#include "MoverCharacterData.h"
#include "CrowdCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FCrowdCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimProxyCharacterData AnimProxyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoverCharacterData MoverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrowdPathingData PathingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOEICrowdCharacterState CurrentState;
    
    OEICROWDMANAGERRUNTIME_API FCrowdCharacterData();
};

