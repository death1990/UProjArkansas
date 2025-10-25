#pragma once
#include "CoreMinimal.h"
#include "NotificationDurations.generated.h"

USTRUCT(BlueprintType)
struct FNotificationDurations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDuration;
    
    ARKANSAS_API FNotificationDurations();
};

