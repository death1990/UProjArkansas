#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterCreationPerkData.generated.h"

class UPerk;

USTRUCT(BlueprintType)
struct FCharacterCreationPerkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPerk>> SelectedPerks;
    
    ARKANSAS_API FCharacterCreationPerkData();
};

