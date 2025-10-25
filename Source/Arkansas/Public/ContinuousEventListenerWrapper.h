#pragma once
#include "CoreMinimal.h"
#include "ContinuousEventListenerWrapper.generated.h"

class UContinuousEventListener;

USTRUCT(BlueprintType)
struct FContinuousEventListenerWrapper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContinuousEventListener* EventListener;
    
public:
    ARKANSAS_API FContinuousEventListenerWrapper();
};

