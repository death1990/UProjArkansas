#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InteractionEventArrayEntry.generated.h"

class UInteractionEvent;

USTRUCT(BlueprintType)
struct FInteractionEventArrayEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionEvent* Event;
    
    ARKANSAS_API FInteractionEventArrayEntry();
};

