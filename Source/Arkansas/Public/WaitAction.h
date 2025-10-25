#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "WaitAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWaitAction : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
public:
    UWaitAction();

};

