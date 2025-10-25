#pragma once
#include "CoreMinimal.h"
#include "OEICineDataTrackGestureTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICineDataTrackGestureTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdleNames;
    
    FOEICineDataTrackGestureTrackInfo();
};

