#pragma once
#include "CoreMinimal.h"
#include "ETacticalTimeDilationEventType.h"
#include "EventListener.h"
#include "OnTactialTimeDilation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnTactialTimeDilation : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETacticalTimeDilationEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneAtEnd;
    
public:
    UOnTactialTimeDilation();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTacticalTimeDilationStart();
    
    UFUNCTION(BlueprintCallable)
    void OnTacticalTimeDilationEnd(float Duration);
    
};

