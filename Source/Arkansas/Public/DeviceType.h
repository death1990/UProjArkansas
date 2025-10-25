#pragma once
#include "CoreMinimal.h"
#include "ActorAkHint.h"
#include "DeviceOutput.h"
#include "DeviceType.generated.h"

class AActor;
class ABroadcastRouter;
class ADynamicEmitterVolume;
class UAkAuxBus;

USTRUCT(BlueprintType)
struct FDeviceType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADynamicEmitterVolume* DynamicEmitterVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorAkHint> InputActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ListenerActorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ListenerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* ListenerAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeviceOutput> DeviceOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABroadcastRouter* BroadcastRouter;
    
public:
    ARKANSAS_API FDeviceType();
};

