#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "EventListener.h"
#include "InteractionDescription.h"
#include "OnInteractableSelectionChanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnInteractableSelectionChanged : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType Interaction;
    
public:
    UOnInteractableSelectionChanged();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractableSelectionChanged(const FInteractionDescription& Description) const;
    
};

