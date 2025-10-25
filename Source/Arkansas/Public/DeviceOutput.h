#pragma once
#include "CoreMinimal.h"
#include "ActorAkHint.h"
#include "DeviceOutput.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct FDeviceOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorAkHint> OutputActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* OutputAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlValue;
    
    ARKANSAS_API FDeviceOutput();
};

