#pragma once
#include "CoreMinimal.h"
#include "DebugCharacterState.h"
#include "DCLGameStateData.generated.h"

USTRUCT(BlueprintType)
struct FDCLGameStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestOrConversationRelated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugCharacterState> States;
    
    ARKANSAS_API FDCLGameStateData();
};

