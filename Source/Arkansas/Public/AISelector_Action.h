#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_Action.generated.h"

class UAI_AIAction;

USTRUCT(BlueprintType)
struct FAISelector_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAI_AIAction> AIAction;
    
    ARKANSAS_API FAISelector_Action();
};

