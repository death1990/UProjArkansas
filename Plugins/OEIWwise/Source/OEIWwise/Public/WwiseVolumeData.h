#pragma once
#include "CoreMinimal.h"
#include "RTPCWithVal.h"
#include "SwitchVal.h"
#include "WwiseVolumeData.generated.h"

class UAkAudioEvent;
class UAkStateValue;

USTRUCT(BlueprintType)
struct OEIWWISE_API FWwiseVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRTPCWithVal> RTPCsWithValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> StateValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchVal> SwitchValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRTPCWithVal> InRoomRTPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRTPCWithVal> OutRoomRTPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchVal> InRoomSwitchVals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchVal> OutRoomSwitchVals;
    
    FWwiseVolumeData();
};

