#pragma once
#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "LookAtExaminable.generated.h"

class UInteractLookAtTriggerComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ALookAtExaminable : public AInteractableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractLookAtTriggerComponent* InteractLookAtTriggerComponent;
    
public:
    ALookAtExaminable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLookedAt();
    
};

