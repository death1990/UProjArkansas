#pragma once
#include "CoreMinimal.h"
#include "AITokenDifficultySetting.generated.h"

USTRUCT(BlueprintType)
struct FAITokenDifficultySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TokenCount;
    
    ARKANSAS_API FAITokenDifficultySetting();
};

