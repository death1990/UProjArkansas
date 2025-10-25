#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "Templates/SubclassOf.h"
#include "PetItem.generated.h"

class UPetData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPetItem : public UItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPetData> PetData;
    
public:
    UPetItem();

};

