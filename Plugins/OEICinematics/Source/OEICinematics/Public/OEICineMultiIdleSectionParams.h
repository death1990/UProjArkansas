#pragma once
#include "CoreMinimal.h"
#include "EBodyIdlePersistType.h"
#include "OEICineMultiIdleSectionParams.generated.h"

class UBodyIdleAsset;

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICineMultiIdleSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBodyIdleAsset*> IdleSwitchMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Persist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyIdlePersistType PersistType;
    
    FOEICineMultiIdleSectionParams();
};

