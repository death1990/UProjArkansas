#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnPetCollected.generated.h"

class UPetData;

UCLASS(Blueprintable, EditInlineNew)
class UOnPetCollected : public UEventListener {
    GENERATED_BODY()
public:
    UOnPetCollected();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPetCollected(TSubclassOf<UPetData> PetData);
    
};

