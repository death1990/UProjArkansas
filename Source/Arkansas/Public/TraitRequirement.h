#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "Templates/SubclassOf.h"
#include "TraitRequirement.generated.h"

class UTrait;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UTraitRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHas;
    
public:
    UTraitRequirement();

};

