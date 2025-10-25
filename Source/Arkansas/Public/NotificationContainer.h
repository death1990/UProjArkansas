#pragma once
#include "CoreMinimal.h"
#include "NotificationContainer.generated.h"

class UBaseNotificationObject;

USTRUCT(BlueprintType)
struct FNotificationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseNotificationObject*> Container;
    
    ARKANSAS_API FNotificationContainer();
};

