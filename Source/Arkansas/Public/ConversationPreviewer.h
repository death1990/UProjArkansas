#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationNavigator -FallbackName=ConversationNavigator
#include "ConversationPreviewer.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FConversationPreviewer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationNavigator PreviewNavigator;
    
public:
    FConversationPreviewer();
};

