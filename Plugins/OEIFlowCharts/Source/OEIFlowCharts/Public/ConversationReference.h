#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ConversationReference.generated.h"

class UConversationAsset;

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FConversationReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationAsset* ConversationAsset;
    
public:
    FConversationReference();
};
FORCEINLINE uint32 GetTypeHash(const FConversationReference) { return 0; }

