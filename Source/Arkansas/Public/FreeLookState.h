#pragma once
#include "CoreMinimal.h"
#include "EFreeLookMode.h"
#include "FreeLookState.generated.h"

USTRUCT(BlueprintType)
struct FFreeLookState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFreeLookMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetPitch;
    
    ARKANSAS_API FFreeLookState();
};

