#pragma once
#include "CoreMinimal.h"
#include "BaseItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "PetItemDefinition.generated.h"

class UPetItem;

USTRUCT(BlueprintType)
struct FPetItemDefinition : public FBaseItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPetItem> PetItemClass;
    
    ARKANSAS_API FPetItemDefinition();
};

