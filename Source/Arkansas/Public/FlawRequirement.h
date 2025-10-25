#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "Templates/SubclassOf.h"
#include "FlawRequirement.generated.h"

class UFlaw;

UCLASS(Blueprintable, EditInlineNew)
class UFlawRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFlaw> Flaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHas;
    
public:
    UFlawRequirement();

};

