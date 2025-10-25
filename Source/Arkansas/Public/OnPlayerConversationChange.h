#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EventListener.h"
#include "OnPlayerConversationChange.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerConversationChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTerminals;
    
public:
    UOnPlayerConversationChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bInEntered);
    
};

