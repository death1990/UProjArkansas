#pragma once
#include "CoreMinimal.h"
#include "LiveStationData.generated.h"

class UOwConversationInstance;

USTRUCT(BlueprintType)
struct FLiveStationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwConversationInstance* ConversationInstance;
    
    ARKANSAS_API FLiveStationData();
};

