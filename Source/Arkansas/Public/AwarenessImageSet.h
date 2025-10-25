#pragma once
#include "CoreMinimal.h"
#include "AlertStateImageSet.h"
#include "AwarenessImageSet.generated.h"

USTRUCT(BlueprintType)
struct FAwarenessImageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertStateImageSet ImageSetUnaware;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertStateImageSet ImageSetSuspicious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertStateImageSet ImageSetInvestigating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertStateImageSet ImageSetAlerted;
    
    ARKANSAS_API FAwarenessImageSet();
};

