#pragma once
#include "CoreMinimal.h"
#include "EPlayerTargetEventType.h"
#include "EventListener.h"
#include "OnPlayerTarget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerTarget : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerTargetEventType PlayerTargetEventType;
    
public:
    UOnPlayerTarget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTarget(AActor* Target);
    
};

