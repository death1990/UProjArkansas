#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InteractPayload.h"
#include "InteractionDescription.h"
#include "StasisCoverObject.generated.h"

class AIndianaCharacter;
class UInteractableComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AStasisCoverObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* Interactable;
    
public:
    AStasisCoverObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CompleteInteract(const FInteractionDescription& Description);
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const;
    
};

