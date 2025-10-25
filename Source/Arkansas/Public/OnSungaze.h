#pragma once
#include "CoreMinimal.h"
#include "ESungazeEventType.h"
#include "EventListener.h"
#include "OnSungaze.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSungaze : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESungazeEventType SungazeEventType;
    
public:
    UOnSungaze();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSungaze();
    
};

