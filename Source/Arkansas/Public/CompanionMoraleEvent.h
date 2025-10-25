#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMoraleContribution.h"
#include "EventResponder.h"
#include "CompanionMoraleEvent.generated.h"

class UEventListener;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UCompanionMoraleEvent : public UObject, public IEventResponder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoraleContribution Contribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoraleAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPositiveMoral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventListener* EventListener;
    
public:
    UCompanionMoraleEvent();


    // Fix for true pure virtual functions not being implemented
};

