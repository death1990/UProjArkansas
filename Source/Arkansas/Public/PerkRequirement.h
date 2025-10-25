#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "Templates/SubclassOf.h"
#include "PerkRequirement.generated.h"

class UPerk;

UCLASS(Blueprintable, EditInlineNew)
class UPerkRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerk> Perk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHas;
    
public:
    UPerkRequirement();

};

