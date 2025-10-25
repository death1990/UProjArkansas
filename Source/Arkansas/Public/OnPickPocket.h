#pragma once
#include "CoreMinimal.h"
#include "EPickpocketEventType.h"
#include "EventListener.h"
#include "OnPickPocket.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPickPocket : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickpocketEventType PickpocketEventType;
    
public:
    UOnPickPocket();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPickPocket(AActor* Pickpocketer, AActor* Target) const;
    
};

