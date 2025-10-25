#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActiveBroadcast.generated.h"

class ABroadcastActor;
class ABroadcastActorListener;
class UAkAudioEvent;
class UBroadcastStationAsset;

UCLASS(Blueprintable)
class ARKANSAS_API UActiveBroadcast : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastStationAsset* BroadcastStationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABroadcastActor* BroadcastActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABroadcastActorListener* ListenerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LastSongPlayed;
    
public:
    UActiveBroadcast();

};

