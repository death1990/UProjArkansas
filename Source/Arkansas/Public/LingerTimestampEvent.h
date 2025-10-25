#pragma once
#include "CoreMinimal.h"
#include "LingerConversationEvent.h"
#include "LingerTimestampEvent.generated.h"

USTRUCT(BlueprintType)
struct FLingerTimestampEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLingerConversationEvent Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoteEvent;
    
    ARKANSAS_API FLingerTimestampEvent();
};

