#pragma once
#include "CoreMinimal.h"
#include "ComponentEvent.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FComponentEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Dispatcher;
    
public:
    ARKANSAS_API FComponentEvent();
};

