#pragma once
#include "CoreMinimal.h"
#include "EAnimDownSightEventType.h"
#include "EventListener.h"
#include "OnAimDownSight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnAimDownSight : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimDownSightEventType AnimDownSightEventType;
    
public:
    UOnAimDownSight();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAimDownSight();
    
};

