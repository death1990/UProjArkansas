#pragma once
#include "CoreMinimal.h"
#include "ERestrictedAreaEventType.h"
#include "EventListener.h"
#include "OnPlayerRestrictedArea.generated.h"

class ARestrictedArea;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerRestrictedArea : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERestrictedAreaEventType EventType;
    
public:
    UOnPlayerRestrictedArea();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRestrictedAreaEvent(const ARestrictedArea* RestrictedArea);
    
};

