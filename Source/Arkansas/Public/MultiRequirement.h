#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "MultiRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMultiRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractableRequirement*> ChildrenRequirements;
    
public:
    UMultiRequirement();

};

