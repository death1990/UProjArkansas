#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SelectPetDelegate.generated.h"

class UPetData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectPet, TSubclassOf<UPetData>, PetData);

