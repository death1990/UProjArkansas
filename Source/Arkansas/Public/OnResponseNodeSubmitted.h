#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnResponseNodeSubmitted.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnResponseNodeSubmitted : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeSinceResponseNodesShown;
    
public:
    UOnResponseNodeSubmitted();

protected:
    UFUNCTION(BlueprintCallable)
    void OnResponseNodeSubmitted(float InTimeSinceResponseNodesShown);
    
};

