#pragma once
#include "CoreMinimal.h"
#include "ECrimeType.h"
#include "EInterrogateEventType.h"
#include "EInterrogationResult.h"
#include "EventListener.h"
#include "OnInterrogateEvent.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnInterrogateEvent : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterrogateEventType InterrogateEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterrogationPassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrimeType Crime;
    
public:
    UOnInterrogateEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartInterrogation();
    
    UFUNCTION(BlueprintCallable)
    void OnEndInterrogation(EInterrogationResult InterrogationResult, AIndianaAiCharacter* Interrogator, ECrimeType InCrime, bool bInDisguised, int32 InDisguiseInterrogationsPassed);
    
};

