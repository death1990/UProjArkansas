#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnDay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnDay : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
public:
    UOnDay();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDay();
    
};

