#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "InteractionDescription.generated.h"

class AActor;
class AIndianaCharacter;
class UInteractableComponent;

USTRUCT(BlueprintType)
struct FInteractionDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Interactee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaCharacter* Initiator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInteractionType> InteractionTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractableComponent> Interactable;
    
public:
    ARKANSAS_API FInteractionDescription();
};

