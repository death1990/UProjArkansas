#pragma once
#include "CoreMinimal.h"
#include "InteractionInterface.h"
#include "Pickup.h"
#include "AudioLogActor.generated.h"

class UScriptEvent;

UCLASS(Blueprintable)
class ARKANSAS_API AAudioLogActor : public APickup, public IInteractionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScriptEvent*> ScriptEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnPickup;
    
public:
    AAudioLogActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

