#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "AudioLogItemDefinition.generated.h"

class UAudioLogItem;

USTRUCT(BlueprintType)
struct FAudioLogItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAudioLogItem> AudioLogItemClass;
    
    ARKANSAS_API FAudioLogItemDefinition();
};

