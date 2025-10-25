#pragma once
#include "CoreMinimal.h"
#include "EItemLocation.h"
#include "InteractableRequirement.h"
#include "Templates/SubclassOf.h"
#include "ItemRequirement.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UItemRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemLocation ItemLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrantsXP;
    
public:
    UItemRequirement();

};

