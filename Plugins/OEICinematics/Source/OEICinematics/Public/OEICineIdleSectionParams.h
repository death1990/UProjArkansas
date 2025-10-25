#pragma once
#include "CoreMinimal.h"
#include "EBodyIdlePersistType.h"
#include "OEICineIdleSectionParams.generated.h"

class UBodyIdleAsset;

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICineIdleSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodyIdleAsset* IdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Persist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyIdlePersistType PersistType;
    
    FOEICineIdleSectionParams();
};

