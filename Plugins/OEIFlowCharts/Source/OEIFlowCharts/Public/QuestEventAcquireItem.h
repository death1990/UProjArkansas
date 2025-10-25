#pragma once
#include "CoreMinimal.h"
#include "QuestEvent.h"
#include "QuestEventAcquireItem.generated.h"

USTRUCT(BlueprintType)
struct FQuestEventAcquireItem : public FQuestEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
public:
    OEIFLOWCHARTS_API FQuestEventAcquireItem();
};

