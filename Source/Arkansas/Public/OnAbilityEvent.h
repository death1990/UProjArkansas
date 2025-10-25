#pragma once
#include "CoreMinimal.h"
#include "EAbilityEventType.h"
#include "EventListener.h"
#include "OnAbilityEvent.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnAbilityEvent : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Identifier;
    
public:
    UOnAbilityEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityEvent(AIndianaAiCharacter* InCaster, EAbilityEventType InEventType, int32 InIdentifier);
    
};

