#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "PerksPurchasedRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPerksPurchasedRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPerksPurchased;
    
public:
    UPerksPurchasedRequirement();

};

