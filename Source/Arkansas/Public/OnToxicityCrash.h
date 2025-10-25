#pragma once
#include "CoreMinimal.h"
#include "EToxicityCrashEventType.h"
#include "EventListener.h"
#include "OnToxicityCrash.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnToxicityCrash : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EToxicityCrashEventType ToxicityCrashEventType;
    
public:
    UOnToxicityCrash();

protected:
    UFUNCTION(BlueprintCallable)
    void OnToxicityCrash();
    
};

