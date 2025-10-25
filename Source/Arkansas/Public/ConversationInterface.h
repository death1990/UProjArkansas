#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ConversationInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UConversationInterface : public UInterface {
    GENERATED_BODY()
};

class IConversationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ConversationStarted(AActor* Speaker, const FGuid& Guid, int32 NodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ConversationNodeChanged(AActor* Character, AActor* Camera, AActor* Audio, int32 NodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ConversationEnded(const FGuid& Guid);
    
};

