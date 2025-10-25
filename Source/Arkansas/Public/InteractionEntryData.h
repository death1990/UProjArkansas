#pragma once
#include "CoreMinimal.h"
#include "RPGInteractableRequirements.h"
#include "InteractionEntryData.generated.h"

USTRUCT(BlueprintType)
struct FInteractionEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGInteractableRequirements InteractionRequirements;
    
    ARKANSAS_API FInteractionEntryData();
};

