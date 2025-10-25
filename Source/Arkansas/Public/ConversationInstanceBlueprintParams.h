#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConversationInstanceBlueprintParams.generated.h"

class AActor;
class UOwConversationInstance;

USTRUCT(BlueprintType)
struct ARKANSAS_API FConversationInstanceBlueprintParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOwConversationInstance> ConversationInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WorldActorPayload;
    
    FConversationInstanceBlueprintParams();
};

